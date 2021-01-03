cmake_minimum_required(VERSION 3.16)
project(ABC/ABC145)

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

add_executable(ABC145_A.cpp A.cpp)
add_executable(ABC145_B.cpp B.cpp)
add_executable(ABC145_C.cpp C.cpp)
add_executable(ABC145_D.cpp D.cpp)
add_executable(ABC145_E.cpp E.cpp)
add_executable(ABC145_E_ver2.cpp E_ver2.cpp)
add_executable(ABC145_F.cpp F.cpp)
