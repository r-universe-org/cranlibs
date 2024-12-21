/* hdf/src/h4config.h.  Generated from h4config.h.in by configure.  */
/* hdf/src/h4config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef H4_AC_APPLE_UNIVERSAL_BUILD */

/* Define to dummy `main' function (if any) required to link to the Fortran
   libraries. */
/* #undef H4_F77_DUMMY_MAIN */

/* Define H4_F77_FUNC as name ## */
/* #undef H4_F77_FUNC */

/* As F77_FUNC, but for C identifiers containing underscores. */
/* #undef H4_F77_FUNC_ */

/* Define to 1 if your Fortran compiler doesn't accept -c and -o together. */
/* #undef H4_F77_NO_MINUS_C_MINUS_O */

/* Define if F77 and FC dummy `main' functions are identical. */
/* #undef H4_FC_DUMMY_MAIN_EQ_F77 */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define H4_HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define H4_HAVE_DLFCN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define H4_HAVE_FCNTL_H 1

/* Define to 1 if you have the `fork' function. */
#define H4_HAVE_FORK 1

/* Define to 1 if you have the `getrusage' function. */
#define H4_HAVE_GETRUSAGE 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define H4_HAVE_INTTYPES_H 1

/* Define to 1 if you have the <jpeglib.h> header file. */
#define H4_HAVE_JPEGLIB_H 1

/* Define to 1 if you have the `jpeg' library (-ljpeg). */
#define H4_HAVE_LIBJPEG 1

/* Define to 1 if you have the `m' library (-lm). */
#define H4_HAVE_LIBM 1

/* Define to 1 if you have the `sz' library (-lsz). */
/* #undef H4_HAVE_LIBSZ */

/* Define to 1 if you have the `ws2_32' library (-lws2_32). */
/* #undef H4_HAVE_LIBWS2_32 */

/* Define to 1 if you have the `z' library (-lz). */
#define H4_HAVE_LIBZ 1

/* Define if we export HDF4-built unmangled netCDF 2.3.2 API calls */
/* #undef H4_HAVE_NETCDF */

/* Define to 1 if you have the <netinet/in.h> header file. */
#define H4_HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define H4_HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define H4_HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define H4_HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define H4_HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define H4_HAVE_STRING_H 1

/* Define to 1 if you have the `system' function. */
#define H4_HAVE_SYSTEM 1

/* Define to 1 if you have the <sys/file.h> header file. */
#define H4_HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define H4_HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define H4_HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define H4_HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define H4_HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define H4_HAVE_SYS_WAIT_H 1

/* Define if szip has encoder */
/* #undef H4_HAVE_SZIP_ENCODER */

/* Define to 1 if you have the <szlib.h> header file. */
/* #undef H4_HAVE_SZLIB_H */

/* Define to 1 if you have the <unistd.h> header file. */
#define H4_HAVE_UNISTD_H 1

/* Define to 1 if you have the `wait' function. */
#define H4_HAVE_WAIT 1

/* Define if we export HDF4-built unmangled netCDF 2.3.2 API calls */
/* #undef H4_HAVE_WIN32_API */

/* Define to 1 if you have the <zlib.h> header file. */
#define H4_HAVE_ZLIB_H 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define H4_LT_OBJDIR ".libs/"

/* Define if deprecated public API symbols are disabled */
/* #undef H4_NO_DEPRECATED_SYMBOLS */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef H4_NO_MINUS_C_MINUS_O */

/* Name of package */
#define H4_PACKAGE "hdf"

/* Define to the address where bug reports for this package should be sent. */
#define H4_PACKAGE_BUGREPORT "help@hdfgroup.org"

/* Define to the full name of this package. */
#define H4_PACKAGE_NAME "HDF"

/* Define to the full name and version of this package. */
#define H4_PACKAGE_STRING "HDF 4.2.17-1"

/* Define to the one symbol short name of this package. */
#define H4_PACKAGE_TARNAME "hdf"

/* Define to the home page for this package. */
#define H4_PACKAGE_URL ""

/* Define to the version of this package. */
#define H4_PACKAGE_VERSION "4.2.17-1"

/* The size of `long', as computed by sizeof. */
#define H4_SIZEOF_LONG 8

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define H4_STDC_HEADERS 1

/* Version number of package */
#define H4_VERSION "4.2.17-1"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
# define H4_WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* # undef H4_WORDS_BIGENDIAN */
# endif
#endif
