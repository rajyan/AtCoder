cmake_minimum_required(VERSION 3.16)
project(others/tokio_marine)

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

add_executable(tokio_marine_A A.cpp)
add_executable(tokio_marine_B B.cpp)
add_executable(tokio_marine_C C.cpp)
add_executable(tokio_marine_D D.cpp)
add_executable(tokio_marine_E E.cpp)
add_executable(tokio_marine_F F.cpp)
