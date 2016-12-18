/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/error/exceptions.hpp
 *
 * Purpose:     Exceptions used by VOLE.
 *
 * Created:     4th January 2007
 * Updated:     18th December 2016
 *
 * Home:        http://vole.sourceforge.net/
 *
 * Copyright (c) 2007-2016, Matthew Wilson and Synesis Software
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


/** \file vole/error/exceptions.hpp
 *
 * \brief Exceptions used by VOLE.
 */

#ifndef VOLE_INCL_VOLE_UTIL_HPP_EXCEPTIONS
#define VOLE_INCL_VOLE_UTIL_HPP_EXCEPTIONS

#ifndef VOLE_DOCUMENTATION_SKIP_SECTION
# define VOLE_VER_VOLE_UTIL_HPP_EXCEPTIONS_MAJOR    1
# define VOLE_VER_VOLE_UTIL_HPP_EXCEPTIONS_MINOR    5
# define VOLE_VER_VOLE_UTIL_HPP_EXCEPTIONS_REVISION 4
# define VOLE_VER_VOLE_UTIL_HPP_EXCEPTIONS_EDIT     13
#endif /* !VOLE_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

#include <vole/util/common.hpp>

#if 0
#elif defined(VOLE_STLSOFT_1_10_B01_OR_LATER)
# ifndef COMSTL_INCL_COMSTL_EXCEPTION_HPP_COMSTL_EXCEPTION
#  include <comstl/exception/comstl_exception.hpp>
# endif /* !COMSTL_INCL_COMSTL_EXCEPTION_HPP_COMSTL_EXCEPTION */
#else
# ifndef COMSTL_INCL_COMSTL_ERROR_HPP_EXCEPTIONS
#  include <comstl/error/exceptions.hpp>
# endif /* !COMSTL_INCL_COMSTL_ERROR_HPP_EXCEPTIONS */
#endif
#ifndef COMSTL_INCL_COMSTL_ERROR_HPP_ERRORINFO_DESC
# include <comstl/error/errorinfo_desc.hpp>
#endif /* !COMSTL_INCL_COMSTL_ERROR_HPP_ERRORINFO_DESC */
#ifndef STLSOFT_INCL_STLSOFT_UTIL_HPP_EXCEPTION_STRING
# include <stlsoft/util/exception_string.hpp>
#endif /* !STLSOFT_INCL_STLSOFT_UTIL_HPP_EXCEPTION_STRING */
//#ifndef STLSOFT_INCL_STLSOFT_UTIL_HPP_EXCEPTION_STRING_CREATOR
//# include <stlsoft/util/exception_string_creator.hpp>
//#endif /* !STLSOFT_INCL_STLSOFT_UTIL_HPP_EXCEPTION_STRING_CREATOR */
#ifndef WINSTL_INCL_CONVERSION_HPP_W2M
# include <winstl/conversion/w2m.hpp>
#endif /* !WINSTL_INCL_CONVERSION_HPP_W2M */
#ifdef STLSOFT_CF_THROW_BAD_ALLOC
# include <new>
#endif /* STLSOFT_CF_THROW_BAD_ALLOC */
#include <string>

/* /////////////////////////////////////////////////////////////////////////
 * Namespace
 */

#ifndef VOLE_NO_NAMESPACE
namespace vole
{
#endif /* !VOLE_NO_NAMESPACE */

/* /////////////////////////////////////////////////////////////////////////
 * Macros
 */

/* /////////////////////////////////////////////////////////////////////////
 * Functions
 */

/* /////////////////////////////////////////////////////////////////////////
 * Classes
 */

/// Root exception class for VOLE
class vole_exception
    : public comstl::com_exception
{
/// \name Member Types
/// @{
protected:
    typedef char                        char_type;
public:
    typedef vole_exception              class_type;
    typedef comstl::com_exception       parent_class_type;
protected:
    typedef stlsoft::exception_string   string_type;
    struct ctor_args_type
    {
        string_type message;
        HRESULT     hr;

        ctor_args_type()
            : message()
            , hr(E_FAIL)
        {}
        explicit ctor_args_type(string_type const& message, HRESULT hr)
            : message(message)
            , hr(hr)
        {}
    };
/// @}

/// \name Construction
/// @{
public:
    /// Construct an instance of the exception from a message and an <code>HRESULT</code>
    ///
    /// \param message The message to be carried in the exception
    /// \param hr The HRESULT associated with the exception
    vole_exception(char const* message, HRESULT hr)
        : parent_class_type(message, hr)
    {}
protected:
    vole_exception(ctor_args_type const& args)
        : parent_class_type(args.message.c_str(), args.hr)
    {}
/// @}

/// \name Not to be implemented
/// @{
private:
    class_type& operator =(class_type const&);
/// @}
};

/// Exception thrown when a vole::object (or vole::collection) instance is
/// not connected to its underlying COM Automation server
class object_not_connected_exception
    : public vole_exception
{
/// \name Member Types
/// @{
public:
    typedef object_not_connected_exception  class_type;
    typedef vole_exception                  parent_class_type;
/// @}

/// \name Construction
/// @{
public:
    /// Construct an instance of the exception from a message and an <code>HRESULT</code>
    ///
    /// \param message The message to be carried in the exception
    /// \param hr The HRESULT associated with the exception
    object_not_connected_exception(char const* message, HRESULT hr)
        : parent_class_type(message, hr)
    {}
/// @}

/// \name Not to be implemented
/// @{
private:
    class_type& operator =(class_type const&);
/// @}
};

/// Exception thrown when a COM Automation server instance cannot be created
class creation_exception
    : public vole_exception
{
/// \name Member Types
/// @{
public:
    typedef creation_exception      class_type;
    typedef vole_exception          parent_class_type;
/// @}

/// \name Construction
/// @{
public:
    /// Construct an instance of the exception from a message and an <code>HRESULT</code>
    ///
    /// \param message The message to be carried in the exception
    /// \param hr The HRESULT associated with the exception
    creation_exception(char const* message, HRESULT hr)
        : parent_class_type(message, hr)
    {}
/// @}

/// \name Not to be implemented
/// @{
private:
    class_type& operator =(class_type const&);
/// @}
};

/// Exception thrown when a type conversion cannot be performed
class type_conversion_exception
    : public vole_exception
{
/// \name Member Types
/// @{
public:
    typedef type_conversion_exception   class_type;
    typedef vole_exception              parent_class_type;
/// @}

/// \name Construction
/// @{
public:
    /// Construct an instance of the exception from a message and an <code>HRESULT</code>
    ///
    /// \param message The message to be carried in the exception
    /// \param hr The HRESULT associated with the exception
    type_conversion_exception(char const* message, HRESULT hr)
        : parent_class_type(message, hr)
    {}
/// @}

/// \name Not to be implemented
/// @{
private:
    class_type& operator =(class_type const&);
/// @}
};

/// Exception thrown when a method/property cannot be described or invoked
class invocation_exception
    : public vole_exception
{
/// \name Member Types
/// @{
public:
    typedef invocation_exception            class_type;
    typedef vole_exception                  parent_class_type;
/// @}

/// \name Construction
/// @{
public:
    /// Construct an instance of the exception from a message and an <code>HRESULT</code>
    ///
    /// \param message The message to be carried in the exception
    /// \param hr The \c HRESULT associated with the exception
    /// \param xinfo Optional pointer to an <code>EXCEPINFO</code> structure
    ///   associated with the failed operation
    invocation_exception(char const* message, HRESULT hr, EXCEPINFO const* xinfo = NULL)
        : parent_class_type(create_reason_(DISPID_UNKNOWN, message, hr, xinfo))
        , m_dispid(DISPID_UNKNOWN)
    {}
    /// Construct an instance of the exception from a message and an <code>HRESULT</code>
    ///
    /// \param dispid The \c DISPID of the method/property invoked
    /// \param message The message to be carried in the exception
    /// \param hr The \c HRESULT associated with the exception
    /// \param xinfo Optional pointer to an <code>EXCEPINFO</code> structure
    ///   associated with the failed operation
    invocation_exception(DISPID dispid, char const* message, HRESULT hr, EXCEPINFO const* xinfo = NULL)
        : parent_class_type(create_reason_(dispid, message, hr, xinfo))
        , m_dispid(dispid)
    {}
/// @}

/// \name Accessors
/// @{
public:
    /// The \c DISPID associated with the exception, or \c DISPID_UNKNOWN if
    /// no identifier was given/specified.
    HRESULT get_dispid() const
    {
        return m_dispid;
    }

/// @}

/// \name Implementation
/// @{
private:
    static ctor_args_type create_reason_(DISPID dispid, char const* message, HRESULT hr, EXCEPINFO const* xinfo);
/// @}

/// \name Members
/// @{
private:
    DISPID const    m_dispid;
/// @}

/// \name Not to be implemented
/// @{
private:
    class_type& operator =(class_type const&);
/// @}
};

/* /////////////////////////////////////////////////////////////////////////
 * Implementation
 */

#ifndef VOLE_DOCUMENTATION_SKIP_SECTION

inline /* static */ invocation_exception::ctor_args_type invocation_exception::create_reason_(
    DISPID              /* dispid */
,   char const*         message
,   HRESULT             hr
,   EXCEPINFO const*    xinfo
)
{
    // TODO: incorporate DISPID into message (it not DISPID_UNKNOWN)

    if( DISP_E_EXCEPTION == hr &&
        NULL != xinfo)
    {
        if(FAILED(xinfo->scode))
        {
            hr = xinfo->scode;
        }
    }

#ifdef STLSOFT_CF_THROW_BAD_ALLOC
    try
    {
#endif /* STLSOFT_CF_THROW_BAD_ALLOC */

        typedef std::basic_string<char_type>  string_t;

#if 1
        if( NULL != xinfo &&
            0 != ::SysStringLen(xinfo->bstrDescription))
        {
            string_t reason(message);

            reason += ": ";
            reason += winstl::w2m(xinfo->bstrDescription, ::SysStringLen(xinfo->bstrDescription));

            // Now trim off all trailing periods
            for(; '.' == reason.c_str()[reason.length() - 1]; )
            {
                reason.resize(reason.length() - 1);
            }

            return ctor_args_type(string_type(reason.data(), reason.size()), hr);
        }
        else
        {
            comstl::errorinfo_desc  eid;

            if(0 != eid.length())
            {
                string_t reason(message);

                reason += ": ";
                reason += eid.c_str_a();

                return ctor_args_type(string_type(reason.data(), reason.size()), hr);
            }
        }
#else /* ? 0 */
        using stlsoft::exception_string_creator;

        UINT const len = (NULL != xinfo) ? ::SysStringLen(xinfo->bstrDescription) : 0u;

        if(0 != len)
        {
            exception_string_creator reason(message);

            reason.reserve(reason.size() + 2 + len);

            reason += ": ";
            reason.append(xinfo->bstrDescription, len);

            // Now trim off all trailing periods
            for(; '.' == reason.c_str()[reason.length() - 1]; )
            {
                reason.truncate(reason.length() - 1);
            }

            return ctor_args_type(reason.create(), hr);
        }
        else
        {
            comstl::errorinfo_desc  eid;

            if(0 != eid.length())
            {
                exception_string_creator reason(message);

                reason.reserve(reason.size() + 2 + eid.length());

                reason += ": ";
                reason += eid;

                return ctor_args_type(reason.create(), hr);
            }
        }
#endif /* 0 */

#ifdef STLSOFT_CF_THROW_BAD_ALLOC
    }
    catch(std::bad_alloc&)
    {
        // Consume
    }
#endif /* STLSOFT_CF_THROW_BAD_ALLOC */

    return ctor_args_type(string_type(message), hr);
}

#endif /* !VOLE_DOCUMENTATION_SKIP_SECTION */

/* ////////////////////////////////////////////////////////////////////// */

#ifndef VOLE_NO_NAMESPACE
} // namespace vole
#endif /* !VOLE_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !VOLE_INCL_VOLE_UTIL_HPP_EXCEPTIONS */

/* ///////////////////////////// end of file //////////////////////////// */
