cmake_minimum_required(VERSION 3.16)
project(./study/chokudai_selection)

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

add_executable(chokudai_selection_ABC008-D ABC008-D.cpp)
add_executable(chokudai_selection_ABC016-C ABC016-C.cpp)
add_executable(chokudai_selection_ABC026-C ABC026-C.cpp)
add_executable(chokudai_selection_ABC060-C ABC060-C.cpp)
add_executable(chokudai_selection_ABC062-C ABC062-C.cpp)
add_executable(chokudai_selection_ABC111-C ABC111-C.cpp)
add_executable(chokudai_selection_ABC112-C ABC112-C.cpp)
add_executable(chokudai_selection_ARC001-B ARC001-B.cpp)
add_executable(chokudai_selection_ARC003-B ARC003-B.cpp)
add_executable(chokudai_selection_ARC006-D ARC006-D.cpp)
add_executable(chokudai_selection_ARC006-D_ver2 ARC006-D_ver2.cpp)
add_executable(chokudai_selection_ARC016-C ARC016-C.cpp)
add_executable(chokudai_selection_ARC054-B ARC054-B.cpp)
add_executable(chokudai_selection_cf2015-C cf2015-C.cpp)
add_executable(chokudai_selection_cf_final-C cf_final-C.cpp)
add_executable(chokudai_selection_cf_final-C_ver2 cf_final-C_ver2.cpp)
add_executable(chokudai_selection_dwango2015-C dwango2015-C.cpp)
add_executable(chokudai_selection_montecarlo montecarlo.cpp)
add_executable(chokudai_selection_yahoo-procon2017-qual yahoo-procon2017-qual.cpp)
