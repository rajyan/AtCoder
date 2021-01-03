cmake_minimum_required(VERSION 3.16)
project(./ABC/ABC161)

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

add_executable(ABC161_A A.cpp)
add_executable(ABC161_B B.cpp)
add_executable(ABC161_C C.cpp)
add_executable(ABC161_D D.cpp)
add_executable(ABC161_Dconstexpr Dconstexpr.cpp)
add_executable(ABC161_E E.cpp)
add_executable(ABC161_F F.cpp)
add_executable(ABC161_cpptemp cpptemp.cpp)
