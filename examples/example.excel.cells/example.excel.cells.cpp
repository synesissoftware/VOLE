/* /////////////////////////////////////////////////////////////////////////
 * File:        example.excel.cells.cpp
 *
 * Purpose:     Implementation file for the example.excel.cells project.
 *
 * Created:     31st October 2008
 * Updated:     1st February 2011
 *
 * Status:      Wizard-generated
 *
 * License:     (Licensed under the Synesis Software Open License)
 *
 *              Copyright (c) 2008-2011, Synesis Software Pty Ltd.
 *              All rights reserved.
 *
 *              www:        http://www.synesis.com.au/software
 *
 * ////////////////////////////////////////////////////////////////////// */


/* VOLE Header Files */
#include <vole/vole.hpp>

/* STLSoft Header Files */
#include <stlsoft/smartptr/ref_ptr.hpp>
#include <comstl/error/errorinfo_desc.hpp>
#include <comstl/util/creation_functions.hpp>
#include <comstl/util/initialisers.hpp>
#include <winstl/error/error_desc.hpp>

/* Standard C++ Header Files */
#include <exception>
#include <iostream>

/* Standard C Header Files */
#include <stdlib.h>

#if defined(_MSC_VER) && \
    defined(_DEBUG)
# include <crtdbg.h>
#endif /* _MSC_VER) && _DEBUG */

/* /////////////////////////////////////////////////////////////////////////
 * main()
 */

static int main_(int /* argc */, char** /*argv*/)
{
    using vole::collection;
    using vole::object;
    using vole::of_type;
    using vole::coercion_level::naturalPromotion;
    using vole::coercion_level::nonDestructiveCoercion;

    object      Excel       =   object::create(L"Excel.Application", CLSCTX_LOCAL_SERVER, nonDestructiveCoercion);

    collection  workbooks   =   Excel.get_property(of_type<collection>(), L"Workbooks");

    object      workbook    =   workbooks.get_property(of_type<object>(), L"Open", "H:\\freelibs\\vole\\0.6\\examples\\example.excel.cells\\workbook.xls");

    collection  worksheets  =   Excel.get_property(of_type<collection>(), L"Worksheets");

    object      worksheet   =   worksheets.get_property(of_type<object>(), L"Item", L"Sheet1");

    object      cell1       =   worksheet.get_property(of_type<object>(), L"Range", "A1");
    object      cell2       =   worksheet.get_property(of_type<object>(), L"Range", "B1");
    object      cell3       =   worksheet.get_property(of_type<object>(), L"Range", "C1");
    object      cell4       =   worksheet.get_property(of_type<object>(), L"Range", "D1");

    std::cout << "Cell 1: " << cell1.get_property(of_type<std::string>(), L"Value") << std::endl;
    std::cout << "Cell 2: " << cell2.get_property(of_type<std::string>(), L"Value") << std::endl;
    std::cout << "Cell 3: " << cell3.get_property(of_type<std::string>(), L"Value") << std::endl;
    std::cout << "Cell 4: " << cell4.get_property(of_type<std::string>(), L"Value") << std::endl;

    return EXIT_SUCCESS;
}

int main(int argc, char** argv)
{
    int             res;

#if defined(_MSC_VER) && \
    defined(_DEBUG)
    _CrtMemState    memState;
#endif /* _MSC_VER && _MSC_VER */

#if defined(_MSC_VER) && \
    defined(_DEBUG)
    _CrtMemCheckpoint(&memState);
#endif /* _MSC_VER && _MSC_VER */

#if 0
    { for(size_t i = 0; i < 0xffffffff; ++i){} }
#endif /* 0 */

    try
    {
        comstl::com_initialiser coinit;

        res = main_(argc, argv);
    }
    catch(std::exception &x)
    {
        std::cerr << "Unhandled error: " << x.what() << std::endl;

        res = EXIT_FAILURE;
    }
    catch(...)
    {
        std::cerr << "Unhandled unknown error" << std::endl;

        res = EXIT_FAILURE;
    }

#if defined(_MSC_VER) && \
    defined(_DEBUG)
    _CrtMemDumpAllObjectsSince(&memState);
#endif /* _MSC_VER) && _DEBUG */

    return res;
}

/* ///////////////////////////// end of file //////////////////////////// */
