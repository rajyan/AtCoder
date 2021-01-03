cmake_minimum_required(VERSION 3.16)
project(./others/Wizzards)

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

add_executable(Wizzards_A A.cpp)
add_executable(Wizzards_B B.cpp)
add_executable(Wizzards_C C.cpp)
add_executable(Wizzards_C_ver3 C_ver3.cpp)
add_executable(Wizzards_C_ver4 C_ver4.cpp)
add_executable(Wizzards_Cver2 Cver2.cpp)
add_executable(Wizzards_D D.cpp)
