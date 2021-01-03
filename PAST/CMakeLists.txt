cmake_minimum_required(VERSION 3.16)
project(./PAST)

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

add_executable(PAST_A A.cpp)
add_executable(PAST_B B.cpp)
add_executable(PAST_C C.cpp)
add_executable(PAST_D D.cpp)
add_executable(PAST_E E.cpp)
add_executable(PAST_F F.cpp)
add_executable(PAST_G G.cpp)
add_executable(PAST_H H.cpp)
add_executable(PAST_I I.cpp)
add_executable(PAST_J J.cpp)
add_executable(PAST_K K.cpp)
add_executable(PAST_L L.cpp)
add_executable(PAST_M M.cpp)
add_executable(PAST_N N.cpp)
add_executable(PAST_O O.cpp)
