cmake_minimum_required(VERSION 3.17)
project(ABC/review)

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

add_executable(review_126-D.cpp 126-D.cpp)
add_executable(review_126-E.cpp 126-E.cpp)
add_executable(review_126-F.cpp 126-F.cpp)
add_executable(review_127-D.cpp 127-D.cpp)
add_executable(review_127-E.cpp 127-E.cpp)
add_executable(review_127-F.cpp 127-F.cpp)
add_executable(review_128-D.cpp 128-D.cpp)
add_executable(review_128-E.cpp 128-E.cpp)
add_executable(review_129-E.cpp 129-E.cpp)
add_executable(review_130-E.cpp 130-E.cpp)
add_executable(review_131-E.cpp 131-E.cpp)
add_executable(review_131-F.cpp 131-F.cpp)
add_executable(review_132-E.cpp 132-E.cpp)
add_executable(review_133-E.cpp 133-E.cpp)
add_executable(review_test.cpp test.cpp)
