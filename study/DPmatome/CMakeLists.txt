cmake_minimum_required(VERSION 3.16)
project(study/DPmatome)

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

add_executable(DPmatome_A.cpp A.cpp)
add_executable(DPmatome_B.cpp B.cpp)
add_executable(DPmatome_C.cpp C.cpp)
add_executable(DPmatome_D.cpp D.cpp)
add_executable(DPmatome_E.cpp E.cpp)
add_executable(DPmatome_F.cpp F.cpp)
add_executable(DPmatome_G.cpp G.cpp)
add_executable(DPmatome_H.cpp H.cpp)
add_executable(DPmatome_I.cpp I.cpp)
add_executable(DPmatome_J.cpp J.cpp)
add_executable(DPmatome_K.cpp K.cpp)
add_executable(DPmatome_K_ver2.cpp K_ver2.cpp)
