/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/util/common.hpp
 *
 * Purpose:     Root include for the VOLE library.
 *
 * Created:     10th August 2006
 * Updated:     18th December 2016
 *
 * Home:        http://vole.sourceforge.net/
 *
 * Copyright (c) 2006-2016, Matthew Wilson and Synesis Software
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 * - Neither the name(s) of Matthew Wilson and Synesis Software nor the names of
 *   any contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * ////////////////////////////////////////////////////////////////////// */


/** \file vole/util/common.hpp
 *
 * \brief Root include for the VOLE library.
 */

#ifndef VOLE_INCL_VOLE_UTIL_HPP_COMMON
#define VOLE_INCL_VOLE_UTIL_HPP_COMMON

#ifndef VOLE_DOCUMENTATION_SKIP_SECTION
# define VOLE_VER_VOLE_UTIL_HPP_COMMON_MAJOR    1
# define VOLE_VER_VOLE_UTIL_HPP_COMMON_MINOR    4
# define VOLE_VER_VOLE_UTIL_HPP_COMMON_REVISION 5
# define VOLE_VER_VOLE_UTIL_HPP_COMMON_EDIT     29
#endif /* !VOLE_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

#include <stlsoft/stlsoft.h>  // If your compiler cannot find this, you may
                              // have forgotten to add the STLSoft include
                              // directory to your project/makefile.
                              //
                              // Note: STLSoft is available from
                              //   http://stlsoft.org/

#if 0
#elif defined(STLSOFT_VER) && \
      STLSOFT_VER >= 0x010c0000
# define VOLE_STLSOFT_1_12_OR_LATER
#elif defined(_STLSOFT_VER) && \
      _STLSOFT_VER >= 0x010a0181
# define VOLE_STLSOFT_1_10_B01_OR_LATER
#elif !defined(_STLSOFT_VER) || \
      _STLSOFT_VER < 0x010982ff
# error This version of VOLE requires STLSoft 1.9.130, or later. (www.stlsoft.org)
#endif /* STLSoft version */

#include <comstl/comstl.h>

/* /////////////////////////////////////////////////////////////////////////
 * Version information
 */

/** \def VOLE_VER_MAJOR
 * \brief The major version number of STLSoft
 *
 * A change to the major version component implies that a dramatic change
 * has occurred in the libraries, such that considerable changes to source
 * dependent on previous versions would need to be effected.
 */

/** \def VOLE_VER_MINOR
 * \brief The minor version number of STLSoft
 *
 * A change to the minor version component imply that a significant change
 * has occurred to the libraries, either in the addition of new functionality
 * or in the destructive change to one or more components such that
 * recompilation and code change may be necessitated.
 */

/** \def VOLE_VER_REVISION
 * \brief The revision version number of STLSoft
 *
 * A change to the revision version component imply that a bug has been
 * fixed. Dependent code should be recompiled in order to pick up the
 * changes.
 */

/** \def VOLE_VER
 * \brief The current composite version number of STLSoft
 *
 * In addition to the individual version symbols - VOLE_VER_MAJOR,
 * VOLE_VER_MINOR and VOLE_VER_REVISION - a composite symbol
 * VOLE_VER is defined, where:
 *  - bits 24-31: the major version
 *  - bits 16-23: the minor version
 *  - bits 8-15: the revision version
 *  - bits 0-7: the beta number; if not a beta, it is 0xFF
 */

#define VOLE_VER_MAJOR          0
#define VOLE_VER_MINOR          7
#define VOLE_VER_REVISION       6

#define VOLE_VER                0x000706ff

/* /////////////////////////////////////////////////////////////////////////
 * Feature checks
 */

#if !defined(STLSOFT_CF_EXCEPTION_SUPPORT)
# error VOLE cannot be compiled without exception support enabled
#endif /* !STLSOFT_CF_EXCEPTION_SUPPORT */

#if defined(_STLSOFT_NO_NAMESPACE)
# error VOLE cannot be compiled with STLSoft with STLSoft namespace suppression enabled
#endif /* _STLSOFT_NO_NAMESPACE */

#if defined(_COMSTL_NO_NAMESPACE)
# error VOLE cannot be compiled with COMSTL with COMSTL namespace suppression enabled
#endif /* _COMSTL_NO_NAMESPACE */

/* /////////////////////////////////////////////////////////////////////////
 * Namespace
 */

#ifndef VOLE_NO_NAMESPACE
namespace vole
{
#endif /* !VOLE_NO_NAMESPACE */

/* /////////////////////////////////////////////////////////////////////////
 * Method Template Macros
 */

#if defined(STLSOFT_COMPILER_IS_MSVC) && \
    _MSC_VER < 1310 
#else /* ? compiler */
# define VOLE_METHOD_TEMPLATE_RETURN_SUPPORT
#endif /* compiler */

/* /////////////////////////////////////////////////////////////////////////
 * Property Macros
 *
 * These are all ripped straight from the XMLSTL project (which is not yet
 * released).
 */

#ifdef VOLE_METHOD_PROPERTY_SUPPORT
# undef VOLE_METHOD_PROPERTY_SUPPORT
#endif /* VOLE_METHOD_PROPERTY_SUPPORT */

#if defined(VOLE_FORCE_METHOD_PROPERTY_SUPPORT)
# define VOLE_METHOD_PROPERTY_SUPPORT
#elif defined(VOLE_NO_METHOD_PROPERTY_SUPPORT)
 /* Do not define VOLE_METHOD_PROPERTY_SUPPORT */
#else /* ? VOLE_???_METHOD_PROPERTY_SUPPORT */
# if defined(STLSOFT_COMPILER_IS_BORLAND)
 /* Do not define VOLE_METHOD_PROPERTY_SUPPORT */
# elif defined(STLSOFT_COMPILER_IS_DMC)
#  define VOLE_METHOD_PROPERTY_SUPPORT
# elif defined(STLSOFT_COMPILER_IS_INTEL)
#  define VOLE_METHOD_PROPERTY_SUPPORT
# elif defined(STLSOFT_COMPILER_IS_MSVC)
#  if _MSC_VER >= 1310
#   define VOLE_METHOD_PROPERTY_SUPPORT
#  endif /* _MSC_VER */
# elif defined(STLSOFT_COMPILER_IS_MWERKS)
#  define VOLE_METHOD_PROPERTY_SUPPORT
# endif /* compiler */
#endif /* VOLE_???_METHOD_PROPERTY_SUPPORT */

/** \def VOLE_OPT_METHOD_PROPERTY_GET_PROP
 *
 * Defines a read-only property
 */

/** \def VOLE_OPT_METHOD_PROPERTY_SET_PROP
 *
 * Defines a write-only property
 */

/** \def VOLE_OPT_METHOD_PROPERTY_GETSET
 *
 * Defines a read/write property
 */

/** \def VOLE_OPT_METHOD_PROPERTY_DEFINE_OFFSET
 *
 * [Internal use only]
 */

/** \def VOLE_OPT_METHOD_PROPERTY_GETSET_PROP
 *
 * [Internal use only]
 */

#ifdef VOLE_METHOD_PROPERTY_SUPPORT
# define VOLE_OPT_METHOD_PROPERTY_GET_PROP(R, C, GM, P)                 STLSOFT_METHOD_PROPERTY_GET_EXTERNAL_PROP(R, C, GM, P)
# define VOLE_OPT_METHOD_PROPERTY_SET_PROP(R, C, SM, P)                 STLSOFT_METHOD_PROPERTY_SET_EXTERNAL_PROP(R, C, SM, P)
# define VOLE_OPT_METHOD_PROPERTY_GETSET(V, RG, RS, C, GM, SM, P)       STLSOFT_METHOD_PROPERTY_GETSET_EXTERNAL(RG, RS, C, GM, SM, P)
# define VOLE_OPT_METHOD_PROPERTY_DEFINE_OFFSET(C, P)                   STLSOFT_METHOD_PROPERTY_DEFINE_OFFSET(C, P)
# define VOLE_OPT_METHOD_PROPERTY_GETSET_PROP(RG, RS, C, GM, SM, P)     STLSOFT_METHOD_PROPERTY_GETSET_EXTERNAL_PROP(RG, RS, C, GM, SM, P)
#else /* ? VOLE_METHOD_PROPERTY_SUPPORT */
# define VOLE_OPT_METHOD_PROPERTY_GET_PROP(R, C, GM, P)
# define VOLE_OPT_METHOD_PROPERTY_SET_PROP(R, C, SM, P)
# define VOLE_OPT_METHOD_PROPERTY_GETSET(V, RG, RS, C, GM, SM, P)
# define VOLE_OPT_METHOD_PROPERTY_DEFINE_OFFSET(C, P)
# define VOLE_OPT_METHOD_PROPERTY_GETSET_PROP(RG, RS, C, GM, SM, P)
#endif /* VOLE_METHOD_PROPERTY_SUPPORT */

/* /////////////////////////////////////////////////////////////////////////
 * Namespace
 */

#ifndef VOLE_NO_NAMESPACE
} // namespace vole
#endif /* !VOLE_NO_NAMESPACE */

/* /////////////////////////////////////////////////////////////////////////
 * Utility
 */

#ifndef VOLE_DOCUMENTATION_SKIP_SECTION
STLSOFT_INLINE
int
VOLE_util_always_true_(void)
{
    return 1;
}
STLSOFT_INLINE
int
VOLE_util_always_false_(void)
{
    return 0;
}
#endif /* !VOLE_DOCUMENTATION_SKIP_SECTION */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !VOLE_INCL_VOLE_UTIL_HPP_COMMON */

/* ///////////////////////////// end of file //////////////////////////// */
