cmake_minimum_required(VERSION 3.16)
project(ABC/ABC185)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_EXTENSIONS OFF)

#add_link_options(
#        -fsanitize=address,undefined
#)

add_compile_options(
        -Wall
        -Wextra
        -Wunreachable-code
#        -fsanitize=address,undefined
#        -D_GLIBCXX_DEBUG
#        -D_DEBUG
        #-O2
)

add_executable(ABC185_A A.cpp)
add_executable(ABC185_B B.cpp)
add_executable(ABC185_C C.cpp)
add_executable(ABC185_D D.cpp)
add_executable(ABC185_E E.cpp)
add_executable(ABC185_F F.cpp)
