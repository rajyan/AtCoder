cmake_minimum_required(VERSION 3.16)
project(ABC/ABC193)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    set(BOOST_ROOT "C:/boost_1_75_0/")
    add_compile_options(
            -W4
    )
else ()
    set(BOOST_ROOT "/mnt/c/boost_1_75_0/")
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

find_package(Boost 1.75.0)
include_directories(${Boost_INCLUDE_DIR})

add_executable(ABC193_A A.cpp)
add_executable(ABC193_B B.cpp)
add_executable(ABC193_C C.cpp)
add_executable(ABC193_C_ver2 C_ver2.cpp)
add_executable(ABC193_D D.cpp)
add_executable(ABC193_D_ver2 D_ver2.cpp)
add_executable(ABC193_E E.cpp)
add_executable(ABC193_F F.cpp)
