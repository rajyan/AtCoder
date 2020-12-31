cmake_minimum_required(VERSION 3.17)
project(AGC/AGC029)

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

add_executable(AGC029_A.cpp A.cpp)
add_executable(AGC029_B.cpp B.cpp)
add_executable(AGC029_B_ver2.cpp B_ver2.cpp)
add_executable(AGC029_C.cpp C.cpp)
add_executable(AGC029_D.cpp D.cpp)
add_executable(AGC029_E.cpp E.cpp)
add_executable(AGC029_F.cpp F.cpp)
