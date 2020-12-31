cmake_minimum_required(VERSION 3.17)
project(ABC/ABC109)

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

add_executable(ABC109_A.cpp A.cpp)
add_executable(ABC109_B.cpp B.cpp)
add_executable(ABC109_C.cpp C.cpp)
add_executable(ABC109_D.cpp D.cpp)
add_executable(ABC109_D_ver2.cpp D_ver2.cpp)
