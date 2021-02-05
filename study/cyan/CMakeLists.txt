cmake_minimum_required(VERSION 3.16)
project(study/cyan)

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

add_executable(cyan_ACLB ACLB.cpp)
add_executable(cyan_AGC002 AGC002.cpp)
add_executable(cyan_AGC003-C AGC003-C.cpp)
add_executable(cyan_AGC006 AGC006.cpp)
add_executable(cyan_AGC019-B AGC019-B.cpp)
add_executable(cyan_AGC020-B AGC020-B.cpp)
add_executable(cyan_AGC023-B AGC023-B.cpp)
add_executable(cyan_AGC024-C AGC024-C.cpp)
add_executable(cyan_AGC046-B AGC046-B.cpp)
add_executable(cyan_AGC046-C AGC046-C.cpp)
add_executable(cyan_ARC011-C ARC011-C.cpp)
add_executable(cyan_ARC022-B ARC022-B.cpp)
add_executable(cyan_ARC027-B ARC027-B.cpp)
add_executable(cyan_ARC030-B ARC030-B.cpp)
add_executable(cyan_ARC034-C ARC034-C.cpp)
add_executable(cyan_ARC043-B ARC043-B.cpp)
add_executable(cyan_ARC048 ARC048.cpp)
add_executable(cyan_ARC052-B ARC052-B.cpp)
add_executable(cyan_ARC108-C ARC108-C.cpp)
add_executable(cyan_Tenka1-2018-D Tenka1-2018-D.cpp)
add_executable(cyan_aising2019-C aising2019-C.cpp)
add_executable(cyan_code-formula2014-C code-formula2014-C.cpp)
add_executable(cyan_codefes2016-C codefes2016-C.cpp)
add_executable(cyan_codefes2016-D codefes2016-D.cpp)
add_executable(cyan_codefes_qual2016-C codefes_qual2016-C.cpp)
add_executable(cyan_hhkb2020-E hhkb2020-E.cpp)
add_executable(cyan_keywnce2021-C keyence2021-C.cpp)
add_executable(cyan_nikke12019-C nikke12019-C.cpp)
add_executable(cyan_soundhound2018-C soundhound2018-C.cpp)
add_executable(cyan_tenka1_2012B-B tenka1_2012B-B.cpp)
add_executable(cyan_tenka1_2018-c tenka1_2018-c.cpp)
