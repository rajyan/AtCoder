cmake_minimum_required(VERSION 3.16)
project(./study/DPmatome)

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

add_executable(DPmatome_A A.cpp)
add_executable(DPmatome_B B.cpp)
add_executable(DPmatome_C C.cpp)
add_executable(DPmatome_D D.cpp)
add_executable(DPmatome_E E.cpp)
add_executable(DPmatome_F F.cpp)
add_executable(DPmatome_G G.cpp)
add_executable(DPmatome_H H.cpp)
add_executable(DPmatome_I I.cpp)
add_executable(DPmatome_J J.cpp)
add_executable(DPmatome_K K.cpp)
add_executable(DPmatome_K_ver2 K_ver2.cpp)
