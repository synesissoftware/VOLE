/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/Excel.driver/Excel.driver.cpp
 *
 * Purpose:     Example program for VOLE. Demonstrates the use of VOLE to
 *              drive Excel, dramatically simplifying the Microsoft example
 *              given in Q216686 (http://support.microsoft.com/kb/216686/).
 *
 * Created:     18th January 2007
 * Updated:     17th March 2010
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
#include <comstl/util/initialisers.hpp>
#include <comstl/util/variant.hpp>
#include <winstl/error/error_desc.hpp>

/* Standard C/C++ Header Files */
#include <iostream>
#include <stdlib.h>

using std::cout;
using std::cerr;
using std::endl;

/* ////////////////////////////////////////////////////////////////////// */

int main()
{
    try
    {
        comstl::ole_init    coinit;

        // Start server ...
        vole::object  xlApp   =   vole::object::create(L"Excel.Application", CLSCTX_LOCAL_SERVER, vole::coercion_level::nonDestructiveCoercion);

        // Make it visible (i.e. app.visible = 1)
        xlApp.put_property(L"Visible", 1);

        // Get Workbooks collection
#ifdef VOLE_METHOD_TEMPLATE_RETURN_SUPPORT
        vole::collection  xlBooks =   xlApp.get_property<vole::collection>(L"Workbooks");
#else /* ? VOLE_METHOD_TEMPLATE_RETURN_SUPPORT */
        vole::collection  xlBooks =   xlApp.get_property(vole::of_type<vole::collection>(), L"Workbooks");
#endif /* VOLE_METHOD_TEMPLATE_RETURN_SUPPORT */

        { for(vole::collection::iterator b = xlBooks.begin(); b != xlBooks.end(); ++b)
        {
//            . . . // Process each work book
        }}

        // Call Workbooks.Add() to get a new workbook...
#ifdef VOLE_METHOD_TEMPLATE_RETURN_SUPPORT
        vole::object      xlBook  =   xlBooks.get_property<vole::object>(L"Add");
#else /* ? VOLE_METHOD_TEMPLATE_RETURN_SUPPORT */
        vole::object      xlBook  =   xlBooks.get_property(vole::of_type<vole::object>(), L"Add");
#endif /* VOLE_METHOD_TEMPLATE_RETURN_SUPPORT */

        // Create a 15x15 safearray of variants...
        comstl::variant arr;
        arr.vt = VT_ARRAY | VT_VARIANT;
        {
        SAFEARRAYBOUND sab[2];
        sab[0].lLbound = 1; sab[0].cElements = 15;
        sab[1].lLbound = 1; sab[1].cElements = 15;
        arr.parray = SafeArrayCreate(VT_VARIANT, 2, sab);
        }

        // Fill safearray with some values...
        for(int i=1; i<=15; i++) {
        for(int j=1; j<=15; j++) {
            // Create entry value for (i,j)
            VARIANT tmp;
            tmp.vt = VT_I4;
            tmp.lVal = i*j;
            // Add to safearray...
            long indices[] = {i,j};
            SafeArrayPutElement(arr.parray, indices, (void *)&tmp);
        }
        }

        // Get ActiveSheet object
#ifdef VOLE_METHOD_TEMPLATE_RETURN_SUPPORT
        vole::object  xlSheet =   xlApp.get_property<vole::object>(L"ActiveSheet");
#else /* ? VOLE_METHOD_TEMPLATE_RETURN_SUPPORT */
        vole::object  xlSheet =   xlApp.get_property(vole::of_type<vole::object>(), L"ActiveSheet");
#endif /* VOLE_METHOD_TEMPLATE_RETURN_SUPPORT */

        // Get Range object for the Range A1:O15...
#ifdef VOLE_METHOD_TEMPLATE_RETURN_SUPPORT
        vole::object  xlRange =   xlSheet.get_property<vole::object>(L"Range", "A1:O15");
#else /* ? VOLE_METHOD_TEMPLATE_RETURN_SUPPORT */
        vole::object  xlRange =   xlSheet.get_property(vole::of_type<vole::object>(), L"Range", "A1:O15");
#endif /* VOLE_METHOD_TEMPLATE_RETURN_SUPPORT */

        // Set range with our safearray...
        xlRange.put_property(L"Value", arr);

        // Wait for user...
        ::MessageBox(NULL, "All done.", "Notice", 0x10000);

        // Set .Saved property of workbook to TRUE so we aren't prompted
        // to save when we tell Excel to quit...
        xlBook.put_property(L"Saved", 1);

        // Tell Excel to quit (i.e. App.Quit)
        xlApp.invoke_method_v(L"Quit");

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

/* ////////////////////////////////////////////////////////////////////// */
