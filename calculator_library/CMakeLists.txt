cmake_minimum_required(VERSION 3.18)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Bstatic")
set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ ${CMAKE_CXX_STANDARD_LIBRARIES}")

project(calculator_library)

add_library(${PROJECT_NAME} SHARED
    "src/calculator_library.cpp"
    "include/calculator_library.h"
    "include/calculator_marcos.h")

target_compile_definitions(${PROJECT_NAME} PRIVATE _WINDLL)

target_include_directories(${PROJECT_NAME}
    PUBLIC
    "include")