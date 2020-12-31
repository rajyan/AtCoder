cmake_minimum_required(VERSION 3.17)
project(GCJ/GCJ2020)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_link_options(
        -fsanitize=address,undefined
)

add_compile_options(
        -Wall
        -Wextra
        -Wunreachable-code
        -fsanitize=address,undefined
        -D_GLIBCXX_DEBUG
        -D_DEBUG
        -O2
)

add_executable(GCJ2020_A.cpp A.cpp)
add_executable(GCJ2020_B.cpp B.cpp)
add_executable(GCJ2020_C.cpp C.cpp)
add_executable(GCJ2020_D.cpp D.cpp)
add_executable(GCJ2020_E.cpp E.cpp)
