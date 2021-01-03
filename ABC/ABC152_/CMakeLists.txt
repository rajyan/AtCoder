cmake_minimum_required(VERSION 3.16)
project(ABC/ABC152_)

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

add_executable(ABC152__A.cpp A.cpp)
add_executable(ABC152__B.cpp B.cpp)
add_executable(ABC152__C.cpp C.cpp)
add_executable(ABC152__D.cpp D.cpp)
add_executable(ABC152__E.cpp E.cpp)
add_executable(ABC152__F.cpp F.cpp)
