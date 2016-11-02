============================================================================
VOLE - A Neat C++ COM/Automation Driver

README

; Created:  21st January 2007
; Updated:  9th August 2012

============================================================================


VOLE - A Neat C++ COM/Automation Driver
---------------------------------------

VOLE is a C++ library that dramatically simplifies the business of driving
  COM servers (via the IDispatch interface) from C++.

VOLE is highly robust.

VOLE is very flexible, taking and returning normal C++ types, such as int,
  double, std::string, std::wstring, and so on.

VOLE is 100% header only.

VOLE is compiler-independent, and has been verified to work with the
  following compilers:
    Digital Mars 8.50
    GCC 3.4
    Intel 8
    Metrowerks CodeWarrior 8
    Visual C++ 6, 7.1, 8, 9 & 10

VOLE is dependent only on the STLSoft libraries (version 1.9.115, or
  later; available from http://stlsoft.org/), which are themselves
  100% header-only.


VOLE is one of the exemplar projects for Matthew Wilson's new book,
  "Breaking Up The Monolith" (http://breakingupthemonolith.com/), which is
  currently in preparation, and will be published by Addison-Wesley in
  2010/11.
  
  VOLE employs the Type Tunnel and Handle::Ref+Wrapper patterns, both of
  which are described in the early chapters of the book. These highly
  flexible mechanisms afford great expressiveness and genericity, without
  sacrificing robustness, performance or incurring unnecessary coupling.


To use VOLE:
------------

  1. Download and unpack the latest VOLE distribution.
  2. Download and unpack the latest STLSoft distribution (version 1.9.115,
     or later; available from http://stlsoft.org/).
  3. Set up the environment variables for VOLE and STLSoft, as described
     in the INSTALL.TXT document included in the VOLE distribution.
  4. Include the main VOLE header file into your project source.

     #include <vole/vole.hpp>

  5. Create an instance of an automation server, via vole::object::create().

     using vole::object;

     object     xlApp   = object::create("Excel.Application");

  6. Invoke automation methods on the server object, according to its
     COM/Automation object model.

     xlApp.put_property(L"Visible", 1);

     collection xlBooks = xlApp.get_property<collection>(L"Workbooks");

     object     xlBook  = xlBooks.get_property<object>(L"Add");

     . . .

     xlApp.invoke_method_v(L"Quit");

  7. Run your program.

  8. Tell all your friends about VOLE.

  9. Make a donation to the project at 
     http://sourceforge.net/project/project_donations.php?group_id=185401

=============================== End of file ================================
