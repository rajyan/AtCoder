cmake_minimum_required(VERSION 3.17)
project(AGC/AGC039_1)

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

add_executable(AGC039_1_A.cpp A.cpp)
add_executable(AGC039_1_A_ver2.cpp A_ver2.cpp)
add_executable(AGC039_1_B.cpp B.cpp)
add_executable(AGC039_1_B_ver2.cpp B_ver2.cpp)
add_executable(AGC039_1_B_ver3.cpp B_ver3.cpp)
add_executable(AGC039_1_C.cpp C.cpp)
add_executable(AGC039_1_D.cpp D.cpp)
add_executable(AGC039_1_E.cpp E.cpp)
add_executable(AGC039_1_F.cpp F.cpp)
