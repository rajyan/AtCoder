cmake_minimum_required(VERSION 3.16)
project(./ABC/ABC126)

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

add_executable(ABC126_A A.cpp)
add_executable(ABC126_B B.cpp)
add_executable(ABC126_C C.cpp)
add_executable(ABC126_D D.cpp)
add_executable(ABC126_D_ver2 D_ver2.cpp)
add_executable(ABC126_D_ver3 D_ver3.cpp)
add_executable(ABC126_D_ver4 D_ver4.cpp)
add_executable(ABC126_D_ver5 D_ver5.cpp)
add_executable(ABC126_E E.cpp)
add_executable(ABC126_F F.cpp)
