# VOLE <!-- omit in toc -->

COM Automation (aka OLE) C++ wrapper library


![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat&logo=cplusplus&logoColor=white)
![Status](https://img.shields.io/badge/status-frozen-lightgrey)
![Maintenance](https://img.shields.io/badge/maintenance-obsolete-inactive)
[![License](https://img.shields.io/badge/License-BSD--2--Clause-blue.svg)](./LICENSE)
[![GitHub release](https://img.shields.io/github/v/release/synesissoftware/VOLE.svg)](https://github.com/synesissoftware/VOLE/releases/latest)
[![Last Commit](https://img.shields.io/github/last-commit/synesissoftware/VOLE)](https://github.com/synesissoftware/VOLE/commits/master)
[![CI](https://github.com/synesissoftware/VOLE/actions/workflows/ci.yml/badge.svg)](https://github.com/synesissoftware/VOLE/actions/workflows/ci.yml)


## Table of Contents <!-- omit in toc -->

- [Introduction](#introduction)
- [Developer Experience](#developer-experience)
- [Project status](#project-status)
- [Project Information](#project-information)
  - [Related documents](#related-documents)
  - [Dependencies](#dependencies)
  - [License](#license)


## Introduction

**VOLE** is a header-only C++ library that simplifies driving COM servers via
`IDispatch` from C++. It takes and returns ordinary C++ types and depends only
on **STLSoft**.


## Developer Experience

This project is **frozen**. Prefer native MSVC COM / Automation facilities for
new work. A minimal Windows/MSVC CI job compiles the example programs (it does
not run them). See [INSTALL.md](./INSTALL.md) for the header-only include setup
and the optional **CMake** example build.


## Project status

**VOLE** is **frozen** and **obsolete**:

* No further development, modernisation, or release work is planned;
* Last intended release is **0.7.7** (project sealed / frozen);
* Prefer native MSVC COM / Automation extensions for new code;
* Change chronology is in [CHANGES.md](./CHANGES.md) and [NEWS.md](./NEWS.md);


## Project Information


### Related documents

* [INSTALL.md](./INSTALL.md) — installation and use;
* [CHANGES.md](./CHANGES.md) — change log;
* [NEWS.md](./NEWS.md) — release chronology;
* [FAQ.md](./FAQ.md) — FAQ;
* [KNOWN_ISSUES.md](./KNOWN_ISSUES.md) — known issues;
* [TODO.md](./TODO.md) — cancelled / frozen backlog;
* [AUTHORS.md](./AUTHORS.md) — authors and contributors;


### Dependencies

* Efferent (fan-out): **STLSoft** (header-only; historically 1.9.130 or later);
* Afferent (fan-in): none actively maintained.


### License

**VOLE** is released under the BSD 2-Clause License — see **LICENSE**.


<!-- ########################### end of file ########################### -->
