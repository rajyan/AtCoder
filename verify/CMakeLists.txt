cmake_minimum_required(VERSION 3.16)
project(./verify)

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

add_executable(verify_AOJ_disjoint_set AOJ_disjoint_set.cpp)
add_executable(verify_Rooling_hash_verify_abc141e Rooling_hash_verify_abc141e.cpp)
add_executable(verify_UnionFind20191019_1 UnionFind20191019_1.cpp)
add_executable(verify_UnionFind20191019_2 UnionFind20191019_2.cpp)
add_executable(verify_UnionFind20191019_3 UnionFind20191019_3.cpp)
add_executable(verify_UnionFinod20191019_4 UnionFinod20191019_4.cpp)
add_executable(verify_combination combination.cpp)
add_executable(verify_hash hash.cpp)
add_executable(verify_modint modint.cpp)
add_executable(verify_randnum randnum.cpp)
