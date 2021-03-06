cmake_minimum_required(VERSION 3.16)
project(AGC/AGC033)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
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

add_executable(AGC033_A A.cpp)
add_executable(AGC033_A_ver2 A_ver2.cpp)
add_executable(AGC033_B B.cpp)
add_executable(AGC033_B_ver2 B_ver2.cpp)
add_executable(AGC033_B_ver3 B_ver3.cpp)
add_executable(AGC033_B_ver4 B_ver4.cpp)
add_executable(AGC033_C C.cpp)
add_executable(AGC033_D D.cpp)
