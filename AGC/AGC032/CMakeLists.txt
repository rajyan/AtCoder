cmake_minimum_required(VERSION 3.16)
project(./AGC/AGC032)

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
            -Wunreachable-code
            -fsanitize=address,undefined
            -D_GLIBCXX_DEBUG
            -D_DEBUG
            -O2
    )
endif ()

add_executable(AGC032_A A.cpp)
add_executable(AGC032_B B.cpp)
add_executable(AGC032_C C.cpp)
add_executable(AGC032_D D.cpp)
add_executable(AGC032_E E.cpp)
add_executable(AGC032_F F.cpp)
