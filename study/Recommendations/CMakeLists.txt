cmake_minimum_required(VERSION 3.17)
project(study/Recommendations)

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

add_executable(Recommendations_ABC020-C.cpp ABC020-C.cpp)
add_executable(Recommendations_AGC024-C.cpp AGC024-C.cpp)
add_executable(Recommendations_AGC032-B.cpp AGC032-B.cpp)
add_executable(Recommendations_ARC005-C.cpp ARC005-C.cpp)
add_executable(Recommendations_C.cpp C.cpp)
add_executable(Recommendations_CODEFES2014.cpp CODEFES2014.cpp)
add_executable(Recommendations_D.cpp D.cpp)
add_executable(Recommendations_E.cpp E.cpp)
add_executable(Recommendations_F.cpp F.cpp)
add_executable(Recommendations_checkcpp.cpp checkcpp.cpp)
add_executable(Recommendations_coorcomp.cpp coorcomp.cpp)
add_executable(Recommendations_primeONsieve.cpp primeONsieve.cpp)
add_executable(Recommendations_yukicoder_269.cpp yukicoder_269.cpp)
