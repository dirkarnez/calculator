cmake_minimum_required(VERSION 3.18)

# uncomment these 2 lines if using clang
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -target x86_64-pc-linux-gnu")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -target x86_64-pc-linux-gnu")

set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libstdc++ ${CMAKE_CXX_STANDARD_LIBRARIES}")

# set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static -static-libgcc -static-libstdc++")
# set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl")

project(calculator)

add_subdirectory(calculator)
add_subdirectory(calculator_library)