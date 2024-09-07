cmake_minimum_required(VERSION 3.28)
project(coding C)

set(CMAKE_C_STANDARD 23)

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)
