cmake_minimum_required(VERSION 3.17)
project(ABC/ABC170)

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

add_executable(ABC170_A.cpp A.cpp)
add_executable(ABC170_B.cpp B.cpp)
add_executable(ABC170_C.cpp C.cpp)
add_executable(ABC170_D.cpp D.cpp)
add_executable(ABC170_E.cpp E.cpp)
add_executable(ABC170_E_ver2.cpp E_ver2.cpp)
add_executable(ABC170_F.cpp F.cpp)
