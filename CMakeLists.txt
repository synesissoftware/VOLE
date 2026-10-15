# ######################################################################## #
# File:     /CMakeLists.txt
#
# Purpose:  Top-level CMake lists file for VOLE
#
# Created:  15th October 2026
# Updated:  15th October 2026
#
# ######################################################################## #


# ##########################################################
# CMake

cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

# require out-of-source builds
file(TO_CMAKE_PATH "${CMAKE_CURRENT_BINARY_DIR}/CMakeLists.txt" LOC_PATH)
if(EXISTS "${LOC_PATH}")

	message(FATAL_ERROR "You cannot build in a source directory (or any directory with a CMakeLists.txt file). Please make a build subdirectory. Feel free to remove CMakeCache.txt and CMakeFiles.")
endif()


# ##########################################################
# project

project(VOLE
	DESCRIPTION "COM Automation (aka OLE) C++ wrapper library"
	HOMEPAGE_URL "https://github.com/synesissoftware/VOLE"
	LANGUAGES CXX
)

string(TOLOWER ${PROJECT_NAME} PROJECT_NAME_LOWER)
string(TOUPPER ${PROJECT_NAME} PROJECT_NAME_UPPER)

# handle version number
set(RX_PROJ_TAG "${PROJECT_NAME_UPPER}")
set(RX_WS "[ \t]")
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/include/${PROJECT_NAME_LOWER}/util/common.hpp" _header_file)
string(REGEX MATCH "#${RX_WS}*define${RX_WS}+_?${RX_PROJ_TAG}_VER_MAJOR${RX_WS}+([0-9]+)" MAJOR_DUMMY ${_header_file})
set(_VERSION_MAJOR ${CMAKE_MATCH_1})
string(REGEX MATCH "#${RX_WS}*define${RX_WS}+_?${RX_PROJ_TAG}_VER_MINOR${RX_WS}+([0-9]+)" MINOR_DUMMY ${_header_file})
set(_VERSION_MINOR ${CMAKE_MATCH_1})
string(REGEX MATCH "#${RX_WS}*define${RX_WS}+_?${RX_PROJ_TAG}_VER_(PATCH|REVISION)${RX_WS}+([0-9]+)" PATCH_DUMMY ${_header_file})
set(_VERSION_PATCH ${CMAKE_MATCH_2})

set(PROJECT_VERSION_MAJOR ${_VERSION_MAJOR})
set(PROJECT_VERSION_MINOR ${_VERSION_MINOR})
set(PROJECT_VERSION_PATCH ${_VERSION_PATCH})
set(PROJECT_VERSION "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)

	set(_VOLE_IS_TOPLEVEL TRUE)
else()

	set(_VOLE_IS_TOPLEVEL FALSE)
endif()

option(BUILD_EXAMPLES "Build examples" ${_VOLE_IS_TOPLEVEL})


# ##########################################################
# OS discrimination

if(NOT WIN32)

	message(FATAL_ERROR "VOLE is a Windows COM/Automation library and requires a Windows host.")
endif()

if(CMAKE_SIZEOF_VOID_P EQUAL 8)

	message(STATUS "Compiling for 64-bit Windows")
	add_definitions(-DWIN64)
else()

	message(STATUS "Compiling for 32-bit Windows")
	add_definitions(-DWIN32)
endif()

if((MSVC) AND (MSVC_VERSION GREATER_EQUAL 1914))

	add_compile_options("/Zc:__cplusplus")
endif()


# ##########################################################
# dependencies
#
# STLSoft may be located via find_package() or, for lines without a CMake
# package (notably STLSoft 1.9), via the STLSOFT CMake/environment variable
# pointing at the project root (with an include/ subdirectory).

set(_VOLE_STLSOFT_VIA_PACKAGE FALSE)

if(NOT DEFINED STLSOFT AND NOT DEFINED ENV{STLSOFT})

	find_package(STLSoft REQUIRED)

	if(NOT STLSoft_FOUND)

		message(FATAL_ERROR "No usable installation of STLSoft was found.")
	else()

		message("-- CMake package STLSoft found (version ${STLSoft_VERSION})")
		set(_VOLE_STLSOFT_VIA_PACKAGE TRUE)
	endif()
else()

	if(DEFINED STLSOFT)

		message("-- STLSOFT provided as CMake variable with value '${STLSOFT}'")

		set(STLSOFT_INCLUDE_DIR ${STLSOFT}/include)
	else()

		message("-- STLSOFT provided as environment variable with value '$ENV{STLSOFT}'")

		set(STLSOFT_INCLUDE_DIR $ENV{STLSOFT}/include)
	endif()

	get_filename_component(STLSOFT_INCLUDE_DIR "${STLSOFT_INCLUDE_DIR}" ABSOLUTE)

	if(NOT EXISTS "${STLSOFT_INCLUDE_DIR}/stlsoft/stlsoft.h")

		message(FATAL_ERROR "STLSoft headers not found under '${STLSOFT_INCLUDE_DIR}'.")
	endif()
endif()


# ##########################################################
# target

add_library(VOLE INTERFACE)
add_library(VOLE::VOLE ALIAS VOLE)

target_include_directories(VOLE
	INTERFACE
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

if(_VOLE_STLSOFT_VIA_PACKAGE)

	target_link_libraries(VOLE
		INTERFACE
			STLSoft::STLSoft
			ole32
			oleaut32
			uuid
	)
else()

	target_include_directories(VOLE
		INTERFACE
			${STLSOFT_INCLUDE_DIR}
	)

	target_link_libraries(VOLE
		INTERFACE
			ole32
			oleaut32
			uuid
	)
endif()


# ##########################################################
# examples

if(BUILD_EXAMPLES)

	add_subdirectory(examples)
endif()


# ##########################################################
# completion

message(NOTICE "Generating CMake build scripts for ${PROJECT_NAME} ${PROJECT_VERSION}, for C++${CMAKE_CXX_STANDARD}")


# ############################## end of file ############################# #
