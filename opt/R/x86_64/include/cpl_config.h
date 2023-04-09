/* generated_headers/cpl_config.h.  Generated from cpl_config.h.in by configure.  */
/* port/cpl_config.h.in. */
/* $Id$ */

#ifndef CPL_CONFIG_H
#define CPL_CONFIG_H

/* --prefix directory for GDAL install */
#define GDAL_PREFIX "/opt/R/x86_64"

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `unsigned long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG 8

/* The size of `void*', as computed by sizeof. */
#define SIZEOF_VOIDP 8

/* Define to 1, if you have LARGEFILE64_SOURCE */
/* #undef VSI_NEED_LARGEFILE64_SOURCE */

/* Define to 1 if you want to use the -fvisibility GCC flag */
/* #undef USE_GCC_VISIBILITY_FLAG */

/* Define to 1 if GCC atomic builtins are available */
#define HAVE_GCC_ATOMIC_BUILTINS 1

/* Define to 1 if GCC bswap builtins are available */
#define HAVE_GCC_BSWAP 1

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* Define to name of 64bit stat structure */
#define VSI_STAT64_T stat

/* Define to 1 if you have the `std::isnan' function. */
#define HAVE_STD_IS_NAN 1



#ifdef GDAL_COMPILATION

/* Define if you want to use pthreads based multiprocessing support */
#define CPL_MULTIPROC_PTHREAD 1

/* Define to 1 if you have the `PTHREAD_MUTEX_RECURSIVE' constant. */
#define HAVE_PTHREAD_MUTEX_RECURSIVE 1

/* Define to 1 if you have the `PTHREAD_MUTEX_ADAPTIVE_NP' constant. */
/* #undef HAVE_PTHREAD_MUTEX_ADAPTIVE_NP */

/* Define to 1 if you have the `pthread_spinlock_t' type. */
/* #undef HAVE_PTHREAD_SPINLOCK */

/* Define to 1 if you have the 5 args `mremap' function. */
/* #undef HAVE_5ARGS_MREMAP */

/* Define to 1 if you have the `getrlimit' function. */
#define HAVE_GETRLIMIT 1

/* Define to 1 if you have the `RLIMIT_AS' constant. */
#define HAVE_RLIMIT_AS 1

/* Define to 1 if you have the <direct.h> header file. */
/* #undef HAVE_DIRECT_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if the system has the type `__uint128_t'. */
#define HAVE_UINT128_T 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <xlocale.h> header file. */
#define HAVE_XLOCALE_H 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `readlink' function. */
#define HAVE_READLINK 1

/* Define to 1 if you have the `posix_spawnp' function. */
#define HAVE_POSIX_SPAWNP 1

/* Define to 1 if you have the `posix_memalign' function. */
#define HAVE_POSIX_MEMALIGN 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the statvfs' function. */
#define HAVE_STATVFS 1

/* Define to 1 if you have the `statvfs64' function. */
/* #undef HAVE_STATVFS64 */

/* Define to 1 if you have the `lstat' function. */
#define HAVE_LSTAT 1

/* For .cpp files, define as const if the declaration of iconv() needs const. */
#define ICONV_CPP_CONST 

/* Define to 1 if libjvm.so should be dlopen'd */
/* #undef JVM_LIB_DLOPEN */

/* Define for Mac OSX Framework build */
/* #undef MACOSX_FRAMEWORK */

/* Define to 1 if you have fseek64, ftell64 */
#define UNIX_STDIO_64 1

/* Define to name of 64bit fopen function */
#define VSI_FOPEN64 fopen

/* Define to name of 64bit ftruncate function */
#define VSI_FTRUNCATE64 ftruncate

/* Define to name of 64bit fseek func */
#define VSI_FSEEK64 fseeko

/* Define to name of 64bit ftell func */
#define VSI_FTELL64 ftello

/* Define to name of 64bit stat function */
#define VSI_STAT64 stat

/* Define to 1 if you have the _SC_PHYS_PAGES' constant. */
#define HAVE_SC_PHYS_PAGES 1

/* Use this file to override settings in instances where you're doing FAT compiles
   on Apple.  It is currently off by default because it doesn't seem to work with
   XCode >= 3/28/11 */
/* #include "cpl_config_extras.h" */

/* Define to 1 if you have the `uselocale' function. */
/* #undef HAVE_USELOCALE */

/* Define to 1 if the compiler supports -Wzero-as-null-pointer-constant */
#define HAVE_GCC_WARNING_ZERO_AS_NULL_POINTER_CONSTANT 1

#endif /* GDAL_COMPILATION */

#endif
