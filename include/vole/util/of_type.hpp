/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/util/of_type.hpp
 *
 * Purpose:     Definition of the vole::of_type class template.
 *
 * Created:     10th August 2006
 * Updated:     21st January 2010
 *
 * Home:        http://vole.sourceforge.net/
 *
 * Copyright (c) 2006-2010, Matthew Wilson and Synesis Software
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


/** \file vole/util/of_type.hpp
 *
 * \brief Definition of the vole::of_type class template.
 */

#ifndef VOLE_INCL_VOLE_UTIL_HPP_OF_TYPE
#define VOLE_INCL_VOLE_UTIL_HPP_OF_TYPE

#ifndef VOLE_DOCUMENTATION_SKIP_SECTION
# define VOLE_VER_VOLE_UTIL_HPP_OF_TYPE_MAJOR       1
# define VOLE_VER_VOLE_UTIL_HPP_OF_TYPE_MINOR       0
# define VOLE_VER_VOLE_UTIL_HPP_OF_TYPE_REVISION    1
# define VOLE_VER_VOLE_UTIL_HPP_OF_TYPE_EDIT        4
#endif /* !VOLE_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

#include <vole/util/common.hpp>

/* /////////////////////////////////////////////////////////////////////////
 * Namespace
 */

#ifndef VOLE_NO_NAMESPACE
namespace vole
{
#endif /* !VOLE_NO_NAMESPACE */

/* /////////////////////////////////////////////////////////////////////////
 * Classes
 */

/** Used to specify the return type of properties and methods with old
 *  compilers (such as Visual C++ 6.0).
 *
 * For example, with a fully-standard compiler, we would use the following:
<pre>
  logger.get_property&lt;long>(L"BackEndId");
</pre>
 *
 * Unfortunately, this breaks Visual C++ 6.0, so we must instead use:
 *
<pre>
  logger.get_property(of_type&lt;long>(), L"BackEndId");
</pre>
 */
template <typename T>
struct of_type
{
    /// The type
    typedef T   type;
};

/* ////////////////////////////////////////////////////////////////////// */

#ifndef VOLE_NO_NAMESPACE
} // namespace vole
#endif /* !VOLE_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !VOLE_INCL_VOLE_UTIL_HPP_OF_TYPE */

/* ///////////////////////////// end of file //////////////////////////// */
