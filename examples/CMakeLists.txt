# ######################################################################## #
# File:     /examples/CMakeLists.txt
#
# Purpose:  Example programs for VOLE (compile-only CI smoke)
#
# Created:  15th October 2026
# Updated:  15th October 2026
#
# ######################################################################## #


add_executable(example.Excel.driver
	Excel.driver/Excel.driver.cpp
)
target_link_libraries(example.Excel.driver
	PRIVATE
		VOLE::VOLE
)

add_executable(example.excel.cells
	example.excel.cells/example.excel.cells.cpp
)
target_link_libraries(example.excel.cells
	PRIVATE
		VOLE::VOLE
)

add_executable(example.pantheios.COM
	pantheios.COM/pantheios.COM.cpp
)
target_link_libraries(example.pantheios.COM
	PRIVATE
		VOLE::VOLE
)


# ############################## end of file ############################# #
