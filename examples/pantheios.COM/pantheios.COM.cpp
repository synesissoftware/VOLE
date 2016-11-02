/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/pantheios.COM/pantheios.COM.cpp
 *
 * Purpose:     Demonstrates the use of VOLE to drive the pantheios.COM
 *              logging library.
 *
 * Created:     3rd January 2007
 * Updated:     1st February 2011
 *
 * www:         http://vole.pantheios.org/
 *
 * License:     This source code is placed into the public domain 2007
 *              by Synesis Software Pty Ltd. There are no restrictions
 *              whatsoever to your use of the software.
 *
 *              This software is provided "as is", and any warranties,
 *              express or implied, of any kind and for any purpose, are
 *              disclaimed.
 *
 * ////////////////////////////////////////////////////////////////////// */


/* VOLE Header Files */
#include <vole/vole.hpp>

/* STLSoft Header Files */
#include <stlsoft/stlsoft.h>
#include <stlsoft/smartptr/ref_ptr.hpp>

#include <comstl/collections/enumerator_sequence.hpp>
#include <comstl/conversion/interface_cast.hpp>
#include <comstl/error/errorinfo_desc.hpp>
#include <comstl/util/creation_functions.hpp>
#include <comstl/util/initialisers.hpp>
#include <comstl/util/value_policies.hpp>

#include <winstl/winstl.h>
#include <winstl/error/error_desc.hpp>

/* Standard C++ Header Files */
#include <exception>
#include <iostream>
#include <stdlib.h>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;

/* ////////////////////////////////////////////////////////////////////// */

int main()
{
    try
    {
        comstl::ole_init    coinit;

        vole::object  loggerManager   =   vole::object::create("pantheios.COM.LoggerManager", CLSCTX_ALL, vole::coercion_level::naturalPromotion);

#ifdef VOLE_METHOD_TEMPLATE_RETURN_SUPPORT

        vole::object  logger          =   loggerManager.invoke_method<vole::object>(L"GetLogger", L"Console", L"VOLE pantheios.COM test");

        logger.invoke_method<void>(L"Log", 3, L"The answer is: ", 43);

        std::string processId   =   logger.get_property<std::string>( L"ProcessIdentity");

        long        backEndId   =   logger.get_property<long>(L"BackEndId");

        logger.invoke_method<void>(L"Log", 4, "abc(", L"DEF", "): ", 2319, " - ", 19.19, L" - ", std::string("yada!").c_str());

        // Aliases
        vole::collection  aliases     =   loggerManager.get_property<vole::collection>(L"KnownLoggerAliases");

#else

        vole::object  logger          =   loggerManager.invoke_method(vole::of_type<vole::object>(), L"GetLogger", L"Console", L"VOLE pantheios.COM test");

        logger.invoke_method_v(L"Log", 3, L"The answer is: ", 43);

        std::string processId   =   logger.get_property(vole::of_type<std::string>(), L"ProcessIdentity");

        long        backEndId   =   logger.get_property(vole::of_type<long>(), L"BackEndId");

        logger.invoke_method_v(L"Log", 4, "abc(", L"DEF", "): ", 2319, " - ", 19.19, L" - ", std::string("yada!").c_str());

        // Aliases
        vole::collection  aliases     =   loggerManager.get_property(vole::of_type<vole::collection>(), L"KnownLoggerAliases");

#endif

        { for(vole::collection::iterator b = aliases.begin(); b != aliases.end(); ++b)
        {
            cout << "\t" << stlsoft::c_str_ptr(*b) << endl;
        }}

        STLSOFT_SUPPRESS_UNUSED(backEndId);

        return EXIT_SUCCESS;
    }
    catch(vole::vole_exception &x)
    {
        cout << "error: " << x.what() << ": " << winstl::error_desc(x.hr()).c_str() << endl;
    }
    catch(std::exception &x)
    {
        cout << "error: " << x.what() << endl;
    }

    return EXIT_FAILURE;
}

/* ///////////////////////////// end of file //////////////////////////// */
