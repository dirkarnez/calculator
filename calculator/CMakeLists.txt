cmake_minimum_required (VERSION 3.8)

add_executable(calculator main.cpp)

include_directories(../calculator_library)
target_link_libraries(calculator calculator_library)
# install(TARGETS calculator RUNTIME DESTINATION bin)