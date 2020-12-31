cmake_minimum_required(VERSION 3.17)
project(ABC/ABC143)

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

add_executable(ABC143_A.cpp A.cpp)
add_executable(ABC143_B.cpp B.cpp)
add_executable(ABC143_C.cpp C.cpp)
add_executable(ABC143_D.cpp D.cpp)
add_executable(ABC143_E.cpp E.cpp)
add_executable(ABC143_E_ver2.cpp E_ver2.cpp)
add_executable(ABC143_E_ver3.cpp E_ver3.cpp)
add_executable(ABC143_E_ver4.cpp E_ver4.cpp)
add_executable(ABC143_F.cpp F.cpp)