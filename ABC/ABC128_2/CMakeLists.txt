cmake_minimum_required(VERSION 3.16)
project(./ABC/ABC128_2)

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

add_executable(ABC128_2_A A.cpp)
add_executable(ABC128_2_B B.cpp)
add_executable(ABC128_2_B_ver2 B_ver2.cpp)
add_executable(ABC128_2_C C.cpp)
add_executable(ABC128_2_D D.cpp)
add_executable(ABC128_2_E E.cpp)
add_executable(ABC128_2_F F.cpp)
