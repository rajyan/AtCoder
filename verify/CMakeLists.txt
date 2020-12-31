cmake_minimum_required(VERSION 3.17)
project(verify)

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

add_executable(verify_AOJ_disjoint_set.cpp AOJ_disjoint_set.cpp)
add_executable(verify_Rooling_hash_verify_abc141e.cpp Rooling_hash_verify_abc141e.cpp)
add_executable(verify_UnionFind20191019_1.cpp UnionFind20191019_1.cpp)
add_executable(verify_UnionFind20191019_2.cpp UnionFind20191019_2.cpp)
add_executable(verify_UnionFind20191019_3.cpp UnionFind20191019_3.cpp)
add_executable(verify_UnionFinod20191019_4.cpp UnionFinod20191019_4.cpp)
add_executable(verify_combination.cpp combination.cpp)
add_executable(verify_hash.cpp hash.cpp)
add_executable(verify_modint.cpp modint.cpp)
add_executable(verify_randnum.cpp randnum.cpp)
