cmake_minimum_required(VERSION 3.17)
project(others/diverta2)

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

add_executable(diverta2_A.cpp A.cpp)
add_executable(diverta2_B.cpp B.cpp)
add_executable(diverta2_C.cpp C.cpp)
add_executable(diverta2_D.cpp D.cpp)
add_executable(diverta2_D_ver2.cpp D_ver2.cpp)
add_executable(diverta2_D_ver3.cpp D_ver3.cpp)
add_executable(diverta2_E.cpp E.cpp)
add_executable(diverta2_F.cpp F.cpp)
