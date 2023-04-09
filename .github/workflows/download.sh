#!/bin/sh
set -e
#PATH=/opt/homebrew/bin:$PATH
brew install cmake zstd gnu-tar findutils

#This would fail once there are duplicate packages in the folder:
#wget -r -np -nv -R "index.html*" https://mac.r-project.org/bin/darwin20/x86_64/

# Download all the libs
rm -Rf out files.log
mkdir out
mkdir packages
packages=$(curl -sSL https://mac.r-project.org/bin/darwin20/x86_64/PACKAGES | perl -lne 'print $1 if /Binary: (.+)/')
while IFS= read -r pkg; do
	echo "Downloading $pkg"
	url="https://mac.r-project.org/bin/darwin20/x86_64/$pkg"
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
cd out/opt/R/x86_64
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
gfind lib -type f -not \( -name '*.a' -or -name '*.pc' -or -name '*.settings' \) -delete

# Copy stuff from homebrew
cp -v /usr/local/opt/cmake/bin/cmake ./bin/
mkdir -p share/cmake/Templates
cp -f /usr/local/opt/cmake/share/cmake/Templates/C* share/cmake/Templates/
cp -R /usr/local/opt/cmake/share/cmake/Modules share/cmake/
cp -v /usr/local/opt/gnu-tar/bin/gtar ./bin/
cp -v /usr/local/opt/zstd/bin/{zstd,unzstd} ./bin/
cp -v $(brew --repo)/Library/Homebrew/os/mac/pkgconfig/11/* ./lib/pkgconfig/
