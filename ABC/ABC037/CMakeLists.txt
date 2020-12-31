cmake_minimum_required(VERSION 3.17)
project(ABC/ABC037)

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

add_executable(ABC037_A.cpp A.cpp)
add_executable(ABC037_B.cpp B.cpp)
add_executable(ABC037_C.cpp C.cpp)
add_executable(ABC037_D.cpp D.cpp)
