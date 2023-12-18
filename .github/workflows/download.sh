#!/bin/sh
set -e

# Workaround for big-sur being deprecated on homebrew
if [ "${OSTYPE:6:2}" = "20" ]; then
curl -OL https://raw.githubusercontent.com/autobrew/bundler/master/lib/bigsur-reset.sh
chmod +x bigsur-reset.sh && ./bigsur-reset.sh
fi
brew install cmake gnu-tar findutils
brew install autobrew/cran/zstd-static

# Switch between intel and arm
ARCH=$(uname -m)
HOMEBREW=$(brew --prefix)
DEST="${PWD}/opt/R/${ARCH}"
#PATH=/opt/homebrew/bin:$PATH

#This would fail once there are duplicate packages in the folder:
#wget -r -np -nv -R "index.html*" https://mac.r-project.org/bin/darwin20/${ARCH}/

# Download all the libs
rm -Rf ${DEST} out files.log
mkdir out
mkdir packages
mkdir -p ${DEST}
packages=$(curl -sSL "https://mac.r-project.org/bin/darwin20/${ARCH}/PACKAGES" | perl -lne 'print $1 if /Binary: (.+)/')
while IFS= read -r pkg; do
	echo "Downloading $pkg"
	url="https://mac.r-project.org/bin/darwin20/${ARCH}/$pkg"
	curl -sSL "$url" -o "packages/$pkg"
	echo "$url" >> files.log
done <<< "$packages"

# Skip some things
rm -v packages/QuantLib* #too big for github
rm -v packages/subversion* #not needed?

for file in packages/*.tar.xz; do
	echo "Extracting $file"
	tar xf $file -C out
done
cd out/opt/R/${ARCH}
for lib in lib/*.a; do
	echo "Stripping $lib"
	strip -S -D $lib
done
mv bin oldbin
mkdir bin

# nb: h5++ seems missing ?
(cd oldbin; mv -v h5cc protoc *config ../bin/)
chmod +x ./bin/*

mv share oldshare
mkdir share/
(cd oldshare; mv -v gdal proj pkgconfig texinfo ../share/)

# Only keep static libs and pc files
gfind lib -type f -not \( -name '*.a' -or -name '*.pc' -or -name '*.settings' -or -name '*.h' \) -delete

# Copy stuff from homebrew
# TODO: do we need this? Maybe CI should just use these tools from the runner?
cp -v ${HOMEBREW}/opt/cmake/bin/cmake ./bin/
mkdir -p share/cmake/Templates
cp -f ${HOMEBREW}/opt/cmake/share/cmake/Templates/C* share/cmake/Templates/
cp -R ${HOMEBREW}/opt/cmake/share/cmake/Modules share/cmake/
cp -v ${HOMEBREW}/opt/gnu-tar/bin/gtar ./bin/
cp -v ${HOMEBREW}/opt/zstd-static/bin/{zstdmt,zstd,unzstd} ./bin/
cp -v $(brew --repo)/Library/Homebrew/os/mac/pkgconfig/11/* ./lib/pkgconfig/

# Copy to final location
mv bin lib include share ${DEST}/
