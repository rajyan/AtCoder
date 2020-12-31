cmake_minimum_required(VERSION 3.17)
project(PAST)

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

add_executable(PAST_A.cpp A.cpp)
add_executable(PAST_B.cpp B.cpp)
add_executable(PAST_C.cpp C.cpp)
add_executable(PAST_D.cpp D.cpp)
add_executable(PAST_E.cpp E.cpp)
add_executable(PAST_F.cpp F.cpp)
add_executable(PAST_G.cpp G.cpp)
add_executable(PAST_H.cpp H.cpp)
add_executable(PAST_I.cpp I.cpp)
add_executable(PAST_J.cpp J.cpp)
add_executable(PAST_K.cpp K.cpp)
add_executable(PAST_L.cpp L.cpp)
add_executable(PAST_M.cpp M.cpp)
add_executable(PAST_N.cpp N.cpp)
add_executable(PAST_O.cpp O.cpp)
