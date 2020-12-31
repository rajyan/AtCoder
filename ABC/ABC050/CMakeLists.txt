cmake_minimum_required(VERSION 3.17)
project(ABC/ABC050)

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

add_executable(ABC050_50_A.cpp 50_A.cpp)
add_executable(ABC050_50_B.cpp 50_B.cpp)
add_executable(ABC050_50_C.cpp 50_C.cpp)
add_executable(ABC050_D.cpp D.cpp)
