cmake_minimum_required(VERSION 3.16)
project(./ABC/ABC128)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    add_compile_options(
            -W4
    )
else ()
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
endif ()

add_executable(ABC128_A A.cpp)
add_executable(ABC128_B B.cpp)
add_executable(ABC128_C C.cpp)
add_executable(ABC128_D D.cpp)
add_executable(ABC128_E E.cpp)
add_executable(ABC128_F F.cpp)
