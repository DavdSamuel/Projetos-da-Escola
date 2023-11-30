cmake_minimum_required (VERSION 3.0.0)
project (FormulaCalculator)

add_executable(FormulaCalculator src/main.c src/operadores.c)

if(UNIX)
    include(tools/compilador-linux.cmake)
elseif(WIN32)
    include(tools/compilador-windows.cmake)
endif()