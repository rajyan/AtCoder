cmake_minimum_required(VERSION 3.16)
project(./study/Recommendations)

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

add_executable(Recommendations_ABC020-C ABC020-C.cpp)
add_executable(Recommendations_AGC024-C AGC024-C.cpp)
add_executable(Recommendations_AGC032-B AGC032-B.cpp)
add_executable(Recommendations_ARC005-C ARC005-C.cpp)
add_executable(Recommendations_C C.cpp)
add_executable(Recommendations_CODEFES2014 CODEFES2014.cpp)
add_executable(Recommendations_D D.cpp)
add_executable(Recommendations_E E.cpp)
add_executable(Recommendations_F F.cpp)
add_executable(Recommendations_checkcpp checkcpp.cpp)
add_executable(Recommendations_coorcomp coorcomp.cpp)
add_executable(Recommendations_primeONsieve primeONsieve.cpp)
add_executable(Recommendations_yukicoder_269 yukicoder_269.cpp)
