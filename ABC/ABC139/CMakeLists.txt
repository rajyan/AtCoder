cmake_minimum_required(VERSION 3.16)
project(./ABC/ABC139)

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

add_executable(ABC139_A A.cpp)
add_executable(ABC139_B B.cpp)
add_executable(ABC139_C C.cpp)
add_executable(ABC139_D D.cpp)
add_executable(ABC139_E E.cpp)
add_executable(ABC139_E_Ver2 E_Ver2.cpp)
add_executable(ABC139_E_ver3 E_ver3.cpp)
add_executable(ABC139_E_ver4 E_ver4.cpp)
add_executable(ABC139_F F.cpp)
