set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

project(calculator_library)

add_library(${PROJECT_NAME} SHARED
    "src/calculator_library.cpp"
    "include/calculator_library.h"
    "include/calculator_marcos.h")


target_include_directories(${PROJECT_NAME}
    PUBLIC
    "include")