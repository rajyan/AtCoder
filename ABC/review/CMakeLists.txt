cmake_minimum_required(VERSION 3.16)
project(./ABC/review)

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

add_executable(review_126-D 126-D.cpp)
add_executable(review_126-E 126-E.cpp)
add_executable(review_126-F 126-F.cpp)
add_executable(review_127-D 127-D.cpp)
add_executable(review_127-E 127-E.cpp)
add_executable(review_127-F 127-F.cpp)
add_executable(review_128-D 128-D.cpp)
add_executable(review_128-E 128-E.cpp)
add_executable(review_129-E 129-E.cpp)
add_executable(review_130-E 130-E.cpp)
add_executable(review_131-E 131-E.cpp)
add_executable(review_131-F 131-F.cpp)
add_executable(review_132-E 132-E.cpp)
add_executable(review_133-E 133-E.cpp)
add_executable(review_test test.cpp)
