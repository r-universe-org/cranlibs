/* expat_config.h.cmake.  Based upon generated expat_config.h.in.  */

#ifndef EXPAT_CONFIG_H
#define EXPAT_CONFIG_H 1

/* 1234 = LIL_ENDIAN, 4321 = BIGENDIAN */
#define BYTEORDER 1234

/* Define to 1 if you have the `arc4random' function. */
/* #undef HAVE_ARC4RANDOM */

/* Define to 1 if you have the `arc4random_buf' function. */
#define HAVE_ARC4RANDOM_BUF

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE

/* Define to 1 if you have the `getrandom' function. */
/* #undef HAVE_GETRANDOM */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H

/* Define to 1 if you have the `bsd' library (-lbsd). */
/* #undef HAVE_LIBBSD */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H

/* Define to 1 if you have `syscall' and `SYS_getrandom'. */
/* #undef HAVE_SYSCALL_GETRANDOM */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H

/* Name of package */
#define PACKAGE "expat"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://github.com/libexpat/libexpat/issues"

/* Define to the full name of this package. */
#define PACKAGE_NAME "expat"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "expat 2.6.4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "expat"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.6.4"

/* Define to 1 if you have the ANSI C header files. */
#ifndef STDC_HEADERS
#define STDC_HEADERS
#endif

/* whether byteorder is bigendian */
/* #undef WORDS_BIGENDIAN */

/* Define to allow retrieving the byte offsets for attribute names and values.
 */
/* #undef XML_ATTR_INFO */

/* Define to specify how much context to retain around the current parse
   point, 0 to disable. */
#define XML_CONTEXT_BYTES 1024

#if ! defined(_WIN32)
/* Define to include code reading entropy from `/dev/urandom'. */
#define XML_DEV_URANDOM
#endif

/* Define to make parameter entity parsing functionality available. */
#define XML_DTD

/* Define as 1/0 to enable/disable support for general entities. */
#define XML_GE 1

/* Define to make XML Namespaces functionality available. */
#define XML_NS

/* Define to __FUNCTION__ or "" if `__func__' does not conform to ANSI C. */
#ifdef _MSC_VER
#  define __func__ __FUNCTION__
#endif

/* Define to `long' if <sys/types.h> does not define. */
/* #undef off_t */

#endif // ndef EXPAT_CONFIG_H
