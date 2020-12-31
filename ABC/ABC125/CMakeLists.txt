cmake_minimum_required(VERSION 3.17)
project(ABC/ABC125)

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

add_executable(ABC125_A.cpp A.cpp)
add_executable(ABC125_B.cpp B.cpp)
add_executable(ABC125_C.cpp C.cpp)
add_executable(ABC125_C_ver2.cpp C_ver2.cpp)
add_executable(ABC125_D.cpp D.cpp)
add_executable(ABC125_Dver2.cpp Dver2.cpp)
