cmake_minimum_required(VERSION 3.17)
project(others/chokudai_speedrun)

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

add_executable(chokudai_speedrun_A.cpp A.cpp)
add_executable(chokudai_speedrun_B.cpp B.cpp)
add_executable(chokudai_speedrun_C.cpp C.cpp)
add_executable(chokudai_speedrun_D.cpp D.cpp)
add_executable(chokudai_speedrun_E.cpp E.cpp)
add_executable(chokudai_speedrun_F.cpp F.cpp)
add_executable(chokudai_speedrun_G.cpp G.cpp)
add_executable(chokudai_speedrun_H.cpp H.cpp)
add_executable(chokudai_speedrun_I.cpp I.cpp)
add_executable(chokudai_speedrun_J.cpp J.cpp)
