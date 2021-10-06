/** @file */

/*     Include file to define variables for Fortran to C interface(s) */
/*     revision history                               */

/*     Robert Grumbine 16 March 1998                  */
/*     NOSEEK added 25 March 1998                  */
/*     CRAY compatibility added 20 April 1998      */
/*     Aug2012  Jun Wang:  move system definition to makefile as a compiler option */

/* The following line should be either undef or define VERBOSE */
/* The latter gives noisy debugging output, while the former */
/*   relies solely on the return codes */
#undef  VERBOSE

/* Declare the system type, supported options are: */
/* LINUX, SGI, HP, CRAY90, IBM4, IBM8, LINUXF90 */
/*   ----move system definition to makefile as a compiler option--- */

#include <stdlib.h>

/* Do not change things below here yourself */

/*     IO-related (bacio.c, banio.c) */
#define BAOPEN_RONLY              1 /**< Read only. */
#define BAOPEN_WONLY              2 /**< Write only. */
#define BAOPEN_RW                 4 /**< Read/write. */
#define BACLOSE                   8 /**< Close. */
#define BAREAD                   16 /**< Read. */
#define BAWRITE                  32 /**< Write. */
#define NOSEEK                   64 /**< No seek. */
#define BAOPEN_WONLY_TRUNC      128 /**< Write only truncate. */
#define BAOPEN_WONLY_APPEND     256 /**< Write only append. */
