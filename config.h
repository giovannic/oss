/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */


/*******************************************************************************
** Copyright (c) 2006-2014 Krell Institute. All Rights Reserved.
**
** This library is free software; you can redistribute it and/or modify it under
** the terms of the GNU Lesser General Public License as published by the Free
** Software Foundation; either version 2.1 of the License, or (at your option)
** any later version.
**
** This library is distributed in the hope that it will be useful, but WITHOUT
** ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
** FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
** details.
**
** You should have received a copy of the GNU Lesser General Public License
** along with this library; if not, write to the Free Software Foundation, Inc.,
** 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*******************************************************************************/


/* Names of all MPI Implementations */
/* #undef ALL_MPI_IMPL_NAMES */

/* Names of all TARGET_MPI Implementations */
/* #undef ALL_TARGET_MPI_IMPL_NAMES */

/* Define to 1 if you only want the cbtf instrumentor. */
/* #undef BUILD_CBTF */

/* Define to 1 if you do want only gui/cli support built. */
#define BUILD_GUI_ONLY 0

/* Define to 1 if you do not want an instrumentor built. */
#define BUILD_INSTRUMENTOR 1

/* Define to 1 if you only want the mrnet instrumentor. */
/* #undef BUILD_MRNET */

/* Define to 1 if you only want the offline instrumentor. */
#define BUILD_OFFLINE 1

/* Define to 1 if you do not want only collector runtime support built. */
#define BUILD_RUNTIME_ONLY 0

/* Define to 1 if building a targeted runtime. */
#define BUILD_TARGETED 0

/* Define to 0 if not building a targeted runtime. */
/* #undef BUILD_TARGETED_BGL */

/* Define to 0 if not building a targeted runtime. */
/* #undef BUILD_TARGETED_BGP */

/* Define to 0 if not building a targeted runtime. */
/* #undef BUILD_TARGETED_BGQ */

/* Name of full path to cbtf installtation */
/* #undef CBTF_INSTALL_DIR */

/* Name of full path to cbtf lib directory */
/* #undef CBTF_LIB_DIR */

/* Name of full path to cbtfrun command */
/* #undef CBTF_TOOLS_CBTFRUN_CMD */

/* Name of full path to cbtf tools collectors */
/* #undef CBTF_TOOLS_COLLECTORSDIR */

/* Name of full path to cbtf tool components */
/* #undef CBTF_TOOLS_COMPONENTSDIR */

/* Name of full path to cbtf tools xml components */
/* #undef CBTF_TOOLS_XMLDIR */

/* Name of default MPI Implementation */
/* #undef DEFAULT_MPI_IMPL_NAME */

/* Name of default TARGET_MPI Implementation */
/* #undef DEFAULT_TARGET_MPI_IMPL_NAME */

/* Define to 1 if setting up the front end for targeted runtime. */
/* #undef FE_SETUP_BUILD_TARGETED */

/* Define to 1 if you have the `argz_add' function. */
#define HAVE_ARGZ_ADD 1

/* Define to 1 if you have the `argz_append' function. */
#define HAVE_ARGZ_APPEND 1

/* Define to 1 if you have the `argz_count' function. */
#define HAVE_ARGZ_COUNT 1

/* Define to 1 if you have the `argz_create_sep' function. */
#define HAVE_ARGZ_CREATE_SEP 1

/* Define to 1 if you have the <argz.h> header file. */
#define HAVE_ARGZ_H 1

/* Define to 1 if you have the `argz_insert' function. */
#define HAVE_ARGZ_INSERT 1

/* Define to 1 if you have the `argz_next' function. */
#define HAVE_ARGZ_NEXT 1

/* Define to 1 if you have the `argz_stringify' function. */
#define HAVE_ARGZ_STRINGIFY 1

/* Define to 1 if you have array services. */
/* #undef HAVE_ARRAYSVCS */

/* Define to 1 if you have BINUTILS. */
#define HAVE_BINUTILS 1

/* define if the Boost library is available */
#define HAVE_BOOST /**/

/* define if the Boost::Date_Time library is available */
/* #undef HAVE_BOOST_DATE_TIME */

/* define if the Boost::Filesystem library is available */
/* #undef HAVE_BOOST_FILESYSTEM */

/* define if the Boost::PROGRAM_OPTIONS library is available */
/* #undef HAVE_BOOST_PROGRAM_OPTIONS */

/* define if the Boost::System library is available */
/* #undef HAVE_BOOST_SYSTEM */

/* define if the Boost::Thread library is available */
/* #undef HAVE_BOOST_THREAD */

/* Define to 1 if you have the `closedir' function. */
#define HAVE_CLOSEDIR 1

/* Define to 1 if you have the declaration of `cygwin_conv_path', and to 0 if
   you don't. */
/* #undef HAVE_DECL_CYGWIN_CONV_PATH */

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define if you have the GNU dld library. */
/* #undef HAVE_DLD */

/* Define to 1 if you have the <dld.h> header file. */
/* #undef HAVE_DLD_H */

/* Define to 1 if you have the `dlerror' function. */
#define HAVE_DLERROR 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <dl.h> header file. */
/* #undef HAVE_DL_H */

/* Define if you have the _dyld_func_lookup function. */
/* #undef HAVE_DYLD */

/* Define to 1 if you have Dyninst. */
#define HAVE_DYNINST 1

/* Define to 1 if you have EPYDOC. */
/* #undef HAVE_EPYDOC */

/* Define to 1 if the system has the type `error_t'. */
#define HAVE_ERROR_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have LAM. */
/* #undef HAVE_LAM */

/* Define to 1 if you have LAMPI. */
/* #undef HAVE_LAMPI */

/* Define if you have the libdl library or equivalent. */
#define HAVE_LIBDL 1

/* Define if libdlloader will be built on this platform */
#define HAVE_LIBDLLOADER 1

/* Define to 0 if you do not have LIBDWARF. */
#define HAVE_LIBDWARF 1

/* Define to 0 if you do not have LIBELF. */
#define HAVE_LIBELF 1

/* Define to 1 if you have libmonitor. */
#define HAVE_LIBMONITOR 1

/* Define to 1 if you have libunwind. */
#define HAVE_LIBUNWIND 1

/* Define this if a modern libltdl is already installed */
#define HAVE_LTDL 1

/* Define to 1 if you have the <mach-o/dyld.h> header file. */
/* #undef HAVE_MACH_O_DYLD_H */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have MPI. */
/* #undef HAVE_MPI */

/* Define to 1 if you have MPICH. */
/* #undef HAVE_MPICH */

/* Define to 1 if you have MPICH. */
/* #undef HAVE_MPICH2 */

/* Define to 1 if you have MPT. */
/* #undef HAVE_MPT */

/* Define to 1 if you have MRNet. */
/* #undef HAVE_MRNET */

/* Define to 1 if you have MPICH. */
/* #undef HAVE_MVAPICH */

/* Define to 1 if you have MVAPICH2. */
/* #undef HAVE_MVAPICH2 */

/* Define to 1 if you have the `opendir' function. */
#define HAVE_OPENDIR 1

/* Define to 1 if you have OpenMP. */
#define HAVE_OPENMP 1

/* Define to 1 if you have OpenMPI. */
/* #undef HAVE_OPENMPI */

/* Define to 1 if you have OTF. */
/* #undef HAVE_OTF */

/* Define to 1 if you have PAPI. */
#define HAVE_PAPI 1

/* Define to 1 if you have POSIX threads. */
#define HAVE_POSIX_THREADS 1

/* Define if libtool can extract symbol lists from object files. */
#define HAVE_PRELOADED_SYMBOLS 1

/* Define to 1 if you have Qt library 3.3 > */
#define HAVE_QTLIB 1

/* Define to 1 if you have the `readdir' function. */
#define HAVE_READDIR 1

/* Define to 1 if you to indicate a runtime directory exists . */
/* #undef HAVE_RUNTIME_DIR */

/* Define if you have the shl_load function. */
/* #undef HAVE_SHL_LOAD */

/* Define to 1 if you have SQLite. */
#define HAVE_SQLITE 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have symtabAPI. */
#define HAVE_SYMTABAPI 1

/* Define to 1 if you have the <sys/dl.h> header file. */
/* #undef HAVE_SYS_DL_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have a target version of BINUTILS. */
/* #undef HAVE_TARGET_BINUTILS */

/* Enable support on the target architecture for dlopen. */
#define HAVE_TARGET_DLOPEN 1

/* Enable support on target architecture for fork and exec families. */
#define HAVE_TARGET_FORK 1

/* Define to 1 if you have a target version of LIBDWARF. */
/* #undef HAVE_TARGET_LIBDWARF */

/* Define to 1 if you have a target version of LIBMONITOR. */
/* #undef HAVE_TARGET_LIBMONITOR */

/* Define to 1 if you have a target version of LIBPTHREAD. */
/* #undef HAVE_TARGET_LIBPTHREAD */

/* Define to 1 if you have a target version of LIBRT. */
/* #undef HAVE_TARGET_LIBRT */

/* Define to 1 if you have a target version of LIBUNWIND. */
/* #undef HAVE_TARGET_LIBUNWIND */

/* Define to 1 if you have MPI. */
/* #undef HAVE_TARGET_MPI */

/* Define to 1 if you have MPICH. */
/* #undef HAVE_TARGET_MPICH2 */

/* Define to 1 if you have OPENMP. */
/* #undef HAVE_TARGET_OPENMP */

/* Define to 1 if you have OTF. */
/* #undef HAVE_TARGET_OTF */

/* Define to 1 if you have a target version of PAPI. */
/* #undef HAVE_TARGET_PAPI */

/* Define to 1 if you have a target version of PAPI that has shared libs. */
/* #undef HAVE_TARGET_PAPI_SHARED */

/* Define to 1 if you have a target version of PERSONALITY. */
/* #undef HAVE_TARGET_PERSONALITY */

/* Enable support on the target architecture for pthreads. */
#define HAVE_TARGET_POSIX_THREADS 1

/* Enable support on target architecture for shared libraries. */
/* #undef HAVE_TARGET_SHARED */

/* Enable support on target architecture for signals. */
#define HAVE_TARGET_SIGNALS 1

/* Define to 1 if you have a target version of SQLITE. */
/* #undef HAVE_TARGET_SQLITE */

/* Define to 1 if you have a target version of STDC_PLUSPLUS. */
/* #undef HAVE_TARGET_STDC_PLUSPLUS */

/* Define to 1 if you have a target version of SYMTABAPI. */
/* #undef HAVE_TARGET_SYMTABAPI */

/* Define to 1 if you have TARGET_VT. */
/* #undef HAVE_TARGET_VT */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have VT. */
/* #undef HAVE_VT */

/* This value is set to 1 to indicate that the system argz facility works */
#define HAVE_WORKING_ARGZ 1

/* Define to 1 if you have XERCES. */
/* #undef HAVE_XERCES */

/* Define if the OS needs help to load dependent libraries for dlopen(). */
/* #undef LTDL_DLOPEN_DEPLIBS */

/* Define to the system default library search path. */
#define LT_DLSEARCH_PATH "/lib:/usr/lib:/usr/lib/i386-linux-gnu/mesa:/lib/i386-linux-gnu:/usr/lib/i386-linux-gnu:/lib/i686-linux-gnu:/usr/lib/i686-linux-gnu:/usr/local/lib:/lib/x86_64-linux-gnu:/usr/lib/x86_64-linux-gnu:/usr/lib/x86_64-linux-gnu/mesa:/lib32:/usr/lib32"

/* The archive extension */
#define LT_LIBEXT "a"

/* The archive prefix */
#define LT_LIBPREFIX "lib"

/* Define to the extension used for runtime loadable modules, say, ".so". */
#define LT_MODULE_EXT ".so"

/* Define to the name of the environment variable that determines the run-time
   module search path. */
#define LT_MODULE_PATH_VAR "LD_LIBRARY_PATH"

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to the shared library suffix, say, ".dylib". */
/* #undef LT_SHARED_EXT */

/* Define if dlsym() requires a leading underscore in symbol names. */
/* #undef NEED_USCORE */

/* Define to 1 if you want to use bfd to resolve symbols. */
#define OPENSS_USE_SYMTABAPI 1

/* Name of package */
#define PACKAGE "openspeedshop"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "OpenSpeedShop"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "OpenSpeedShop 2.1_u2"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "openspeedshop"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.1_u2"

/* Name of full path python dynamic library */
#define PYTHON_FP_LIB_NAME "/usr/lib/libpython2.7.so"

/* Name of python dynamic library */
#define PYTHON_LIB_NAME "libpython2.7.so"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Name targeted OS */
#define TARGET_OS x86_64-unknown-linux-gnu

/* Do not define if not building for targeted bgl. */
/* #undef TARGET_OS_BGL */

/* Do not define if not building for targeted bgp. */
/* #undef TARGET_OS_BGP */

/* Do not define if not building for targeted bgq. */
/* #undef TARGET_OS_BGQ */

/* Do not define if not building for targeted cray-xe. */
/* #undef TARGET_OS_CRAYXE */

/* Do not define if not building for targeted cray-xk. */
/* #undef TARGET_OS_CRAYXK */

/* Do not define if not building for targeted cray-xt4. */
/* #undef TARGET_OS_CRAYXT4 */

/* Do not define if not building for targeted cray-xt5. */
/* #undef TARGET_OS_CRAYXT5 */

/* Define to 1 if you want to use an explicit TLS implementation instead of
   the __thread keyword. */
/* #undef USE_EXPLICIT_TLS */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "2.1_u2"

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define so that glibc/gnulib argp.h does not typedef error_t. */
/* #undef __error_t_defined */

/* Define to a type to use for `error_t' if it is not otherwise available. */
/* #undef error_t */
