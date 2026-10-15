# VOLE - Changes <!-- omit in toc -->


## 0.7.7 - 15th October 2026

* Project **FROZEN** and marked **OBSOLETE**; no further development planned;
* Prefer native MSVC COM / Automation facilities for new work;
* Converted project documentation to Markdown (**CHANGES.md**, **NEWS.md**, **README.md**, and related);
* Removed legacy **HISTORY.txt** (content subsumed by **CHANGES.md**);
* Version macros: `VOLE_VER_PATCH`, `VOLE_VER_RELSTATUS`, computed `VOLE_VER` (`0x000707FF`); `VOLE_VER_REVISION` aliases `VOLE_VER_PATCH`;
* Compatible with **STLSoft** 1.9, 1.10, 1.11, and tip: `vole_exception` parents `comstl::com_exception` or `comstl::comstl_exception` as appropriate; 1.12 gates cascade to the 1.10 feature define;
* `vole_exception::get_hr()` / `hr()` wrap parent `get_hr()` (1.9) or `status_code()` (1.10.2+), so examples and clients keep a stable HRESULT accessor;
* Added **CMakeLists.txt** with `find_package(STLSoft)` or `STLSOFT` path mode (for 1.9, which has no CMake package);
* Windows/MSVC CI builds (but does not run) examples in a matrix over **STLSoft-1.9**, **STLSoft-1.10**, **STLSoft-1.11**, and **STLSoft** (tip);
* **AUTHORS.md** defect-reports list ordered lexicographically by surname (handles where no surname);


## 0.7.6 - 9th August 2012

* Improved warnings handling;
* Forward compatibility with **STLSoft** 1.10 beta 1;
* Added makefiles for Visual C++ 11, 12, 14;
* Compatibility with **STLSoft** 1.9;
* Bundles **xTests** 0.18.10;
* Depends on **STLSoft** 1.9.130;


## 0.7.5 - 2nd November 2016

* First GitHub publication of the library tree with `VOLE_VER` set to **0.7.5**;
* No dedicated change-log section was written at the time (docs still described **0.7.4**);
* Requires **STLSoft** 1.9.123 or later (enforced in **include/vole/util/common.hpp**);
* Feature set matches the previously documented **0.7.4** line;


## 0.7.4 - 9th August 2012

* Refactored to remove all possible non-public functions to helper class, in order to present polished interface to IDE context-sensitive help / IntelliSense;
* Added support for **MFC** type arguments (currently only `CString`);
* 64-bit compatibility;
* Added makefiles for VC++ 10 and VC++ 10 (x64);
* Added **test.unit.variant** test project;
* Bundles **xTests** 0.16;
* Depends on **STLSoft** 1.9.115;


## 0.7.3 - 1st February 2011

* Simplified the naming of bin and lib targets within the makefiles;
* Various preparations for **STLSoft** 1.10;
* Bundles **xTests** 0.16;
* Depends on **STLSoft** 1.9.108;


## 0.7.2 - 28th April 2010

* Added `vole::object::has_member()`;
* Added `vole::object::get_memberId()`;
* Fixed `put_prop()` code-generated defect;
* Bundles **xTests** 0.15.1;
* Depends on **STLSoft** 1.9.97;


## 0.7.1 - 27th April 2010

* Added "argument traits" mechanism, allowing arbitrary extension of compatible argument types;
* Substantial rework of implementation;
* Bundles **xTests** 0.15.1;
* Depends on **STLSoft** 1.9.97;


## 0.6.6 - 5th March 2010

* Fixed access control defect in `collection::operator []`;
* Refactored internal implementation;
* Requires **STLSoft** 1.9.94;


## 0.6.5 - 21st January 2010

* Added component test (that uses **Excel**, if present);
* Fixed defects in conversions to int/long/float/double;
* Other minor fixes;
* Now compatible with VC++ 8+'s "safe string" library;
* Various documentation markup changes;


## 0.6.4 - 19th June 2009

* Corrects defect in default constructor, whereby coercion level parameter, if specified, is ignored;


## 0.6.3 - 13th May 2009

* Invocation_exception now passes through the underlying scode when `DISP_E_EXCEPTION`;


## 0.6.2 - 15th September 2008

* Fixed defect in `com_return_traits<object>::convert()`;
* Fixed defect in assertion in `GetIDOfName()`'s thrown exception;
* Fixed up various examples to use 3-parameter create() method;


## 0.6.1 - 12th September 2008

* Added return traits specialisations for `DATE`, `FILETIME` and `SYSTEMTIME`;
* Documentation improvements;


## 0.5.2 - 6th September 2008

* Changed the way `vole::collection::get__NewEnum()` works: it now makes two attempts to elicit the enumerator, first via DISPATCH_PROPERTYGET and then as DISPATCH_METHOD;
* Fixed a defect in `collection::Invoke()` whereby an `EXCEPINFO` structure was not freed;
* Collection::Invoke() now uses the `EXCEPINFO` information when throwing an exception;
* Enhanced vole::`invocation_exception` ctor to take pointer to `EXCEPINFO` as (optional) third parameter. If an exception information pointer is passed, then exception info result code takes preference if the 'outer' code is `DISP_E_EXCEPTION`, and the the description (if any) is used in preference to the system message for the result code;


## 0.5.1 - 23rd August 2008

* Renamed coercion level `nonDestructiveTruncation` to `nonDestructiveCoercion`;
* Added `com_return_traits<float>`;
* Added `com_return_traits<double>`;
* Changed behaviour for `com_return_traits<bool>`, `com_return_traits<short>`, `com_return_traits<int>`, `com_return_traits<long>`, `com_return_traits<std::string>` and `com_return_traits<std::wstring>`;
* Added **test.unit.return_traits.builtins**;
* Added **test.unit.return_traits.std_types**;


## 0.4.4 - 15th August 2008

* Change for **GCC** inclusion issue;


## 0.4.3 - 15th August 2008

* Fixed switch fall-through defect in `com_return_traits<short>` when coercion level is `nonDestructiveTruncation`;
* Minor enhancements to documentation;


## 0.4.2 - 16th June 2008

* Fixed truncation bug when returning int and long types;


## 0.4.1 - 13th April 2008

* Refactoring of exception hierarchy;


## 0.3.3 - 8th April 2008

* Changes to default-arguments in `object::create()`, to avoid ambiguities;


## 0.3.2 - 18th November 2007

* Support for Borland C/C++ 5.82 (Turbo C++);


## 0.3.1 - 2nd November 2007

* Now allows default construction of vole::object;


## 0.2.5 - 5th August 2007

* Fixes of various compiler warnings;


## 0.2.4 - 30th April 2007

* Now compatible with **STLSoft** 1.9.1 (version released with Extended STL,;


## 0.2.3 - 10th April 2007

* Fixed bug in `vole::object::QueryInterface()`;


## 0.2.2 - 6th April 2007

* Refinements of vole::object and vole::collection facade classes;


## 0.2.1 - 21st January 2007

* This is the first released version;


<!-- ########################### end of file ########################### -->
