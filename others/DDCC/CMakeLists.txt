cmake_minimum_required(VERSION 3.16)
project(others/DDCC)

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

add_executable(DDCC_A A.cpp)
add_executable(DDCC_B B.cpp)
add_executable(DDCC_C C.cpp)
add_executable(DDCC_D D.cpp)
add_executable(DDCC_D_ver2 D_ver2.cpp)
add_executable(DDCC_E E.cpp)
add_executable(DDCC_F F.cpp)
