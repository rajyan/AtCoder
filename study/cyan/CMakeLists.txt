cmake_minimum_required(VERSION 3.17)
project(study/cyan)

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

add_executable(cyan_ACLB.cpp ACLB.cpp)
add_executable(cyan_AGC002.cpp AGC002.cpp)
add_executable(cyan_AGC003-C.cpp AGC003-C.cpp)
add_executable(cyan_AGC006.cpp AGC006.cpp)
add_executable(cyan_AGC019-B.cpp AGC019-B.cpp)
add_executable(cyan_AGC020-B.cpp AGC020-B.cpp)
add_executable(cyan_AGC023-B.cpp AGC023-B.cpp)
add_executable(cyan_AGC024-C.cpp AGC024-C.cpp)
add_executable(cyan_AGC046-B.cpp AGC046-B.cpp)
add_executable(cyan_AGC046-C.cpp AGC046-C.cpp)
add_executable(cyan_ARC022-B.cpp ARC022-B.cpp)
add_executable(cyan_ARC027-B.cpp ARC027-B.cpp)
add_executable(cyan_ARC030-B.cpp ARC030-B.cpp)
add_executable(cyan_ARC034-C.cpp ARC034-C.cpp)
add_executable(cyan_ARC043-B.cpp ARC043-B.cpp)
add_executable(cyan_ARC048.cpp ARC048.cpp)
add_executable(cyan_ARC052-B.cpp ARC052-B.cpp)
add_executable(cyan_ARC108-C.cpp ARC108-C.cpp)
add_executable(cyan_Tenka1-2018-D.cpp Tenka1-2018-D.cpp)
add_executable(cyan_aising2019-C.cpp aising2019-C.cpp)
add_executable(cyan_code-formula2014-C.cpp code-formula2014-C.cpp)
add_executable(cyan_codefes2016-C.cpp codefes2016-C.cpp)
add_executable(cyan_codefes2016-D.cpp codefes2016-D.cpp)
add_executable(cyan_codefes_qual2016-C.cpp codefes_qual2016-C.cpp)
add_executable(cyan_nikke12019-C.cpp nikke12019-C.cpp)
add_executable(cyan_soundhound2018-C.cpp soundhound2018-C.cpp)
add_executable(cyan_tenka1_2012B-B.cpp tenka1_2012B-B.cpp)
add_executable(cyan_tenka1_2018-c.cpp tenka1_2018-c.cpp)
