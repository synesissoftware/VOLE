# VOLE - Installation and Use <!-- omit in toc -->

**VOLE** is a 100% header-only C++ library and requires no building. It depends
on the **STLSoft** libraries (also header-only), version **1.9.130** or later.


## Table of Contents <!-- omit in toc -->

- [Status](#status)
- [Use](#use)


## Status

This project is **frozen** / **obsolete**. Prefer native MSVC COM / Automation
facilities for new work. CI compiles the example programs on Windows/MSVC; it
does not run them.


## Use

Ensure the **VOLE** and **STLSoft** include directories are on your include path.

One approach is to define environment variables, for example:

```text
STLSOFT=C:\opensource\STLSoft\stlsoft-1.9.130
VOLE=C:\opensource\VOLE\vole-0.7.7
```

and then compile with those include roots:

```text
cl -I%VOLE%/include -I%STLSOFT%/include vole_test.cpp
```

Include the main header:

```cpp
#include <vole/vole.hpp>
```


## CMake (examples only)

With an installed **STLSoft** CMake package:

```bash
cmake -B build -S . -DCMAKE_PREFIX_PATH=<stlsoft-prefix> -DBUILD_EXAMPLES=ON
cmake --build build --config Release
```

This builds the three programs under **examples/**. Do not expect them to run
without Excel / pantheios.COM present.


<!-- ########################### end of file ########################### -->
