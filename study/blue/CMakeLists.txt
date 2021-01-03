cmake_minimum_required(VERSION 3.16)
project(./study/blue)

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

add_executable(blue_AGC008-C AGC008-C.cpp)
add_executable(blue_AGC014-C AGC014-C.cpp)
add_executable(blue_AGC017-B AGC017-B.cpp)
add_executable(blue_AGC026-B AGC026-B.cpp)
add_executable(blue_AGC25-B AGC25-B.cpp)
add_executable(blue_AOJ_RSQ AOJ_RSQ.cpp)
add_executable(blue_ARC028-C ARC028-C.cpp)
add_executable(blue_ARC031 ARC031.cpp)
add_executable(blue_ARC033-C ARC033-C.cpp)
add_executable(blue_ARC050-B ARC050-B.cpp)
add_executable(blue_ARC064-E ARC064-E.cpp)
add_executable(blue_ARC071-E ARC071-E.cpp)
add_executable(blue_ARC103-E ARC103-E.cpp)
add_executable(blue_E E.cpp)
add_executable(blue_F F.cpp)
add_executable(blue_aising2019-D aising2019-D.cpp)
add_executable(blue_codefes2016-C codefes2016-C.cpp)
add_executable(blue_codefes2016-D codefes2016-D.cpp)
add_executable(blue_jsc2019_qual jsc2019_qual.cpp)
add_executable(blue_keyence2019-D keyence2019-D.cpp)
add_executable(blue_keyence2020-D keyence2020-D.cpp)
add_executable(blue_tenka1-2017-D tenka1-2017-D.cpp)
