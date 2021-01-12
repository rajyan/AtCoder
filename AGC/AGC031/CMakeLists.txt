cmake_minimum_required(VERSION 3.16)
project(AGC/AGC031)

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

add_executable(AGC031_A A.cpp)
add_executable(AGC031_B B.cpp)
add_executable(AGC031_C C.cpp)
add_executable(AGC031_D D.cpp)
add_executable(AGC031_E E.cpp)
add_executable(AGC031_F F.cpp)
