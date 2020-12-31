cmake_minimum_required(VERSION 3.17)
project(ABC/ABC136)

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

add_executable(ABC136_A.cpp A.cpp)
add_executable(ABC136_B.cpp B.cpp)
add_executable(ABC136_C.cpp C.cpp)
add_executable(ABC136_D.cpp D.cpp)
add_executable(ABC136_E.cpp E.cpp)
add_executable(ABC136_F.cpp F.cpp)
