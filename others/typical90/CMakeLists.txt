cmake_minimum_required(VERSION 3.16)
project(others/typical90)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    set(BOOST_ROOT "C:/boost_1_75_0/")
    add_compile_options(
            -W4
    )
else ()
    add_link_options(
            -fsanitize=address,undefined
    )
    add_compile_options(
            -Wall
            -Wextra
            -fsanitize=address,undefined
            -D_GLIBCXX_DEBUG
            -D_DEBUG
            -O2
    )
endif ()

add_executable(typical90_01 01.cpp)
add_executable(typical90_02 02.cpp)
add_executable(typical90_03 03.cpp)
add_executable(typical90_04 04.cpp)
add_executable(typical90_05 05.cpp)
add_executable(typical90_06 06.cpp)
