cmake_minimum_required(VERSION 3.16)
project(others/chokudai_speedrun)

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
            -fsanitize=address,undefined
            -D_GLIBCXX_DEBUG
            -D_DEBUG
            -O2
    )
endif ()

add_executable(chokudai_speedrun_A A.cpp)
add_executable(chokudai_speedrun_B B.cpp)
add_executable(chokudai_speedrun_C C.cpp)
add_executable(chokudai_speedrun_D D.cpp)
add_executable(chokudai_speedrun_E E.cpp)
add_executable(chokudai_speedrun_F F.cpp)
add_executable(chokudai_speedrun_G G.cpp)
add_executable(chokudai_speedrun_H H.cpp)
add_executable(chokudai_speedrun_I I.cpp)
add_executable(chokudai_speedrun_J J.cpp)
