cmake_minimum_required(VERSION 3.16)
project(AGC/AGC035)

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

add_executable(AGC035_A.cpp A.cpp)
add_executable(AGC035_B.cpp B.cpp)
add_executable(AGC035_B_ver2.cpp B_ver2.cpp)
add_executable(AGC035_B_ver3.cpp B_ver3.cpp)
add_executable(AGC035_C.cpp C.cpp)
add_executable(AGC035_D.cpp D.cpp)
add_executable(AGC035_E.cpp E.cpp)
add_executable(AGC035_F.cpp F.cpp)
