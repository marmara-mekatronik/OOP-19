cmake_minimum_required(VERSION 3.14)
project(sql)

set(CMAKE_CXX_STANDARD 17)

add_executable(sql main.cpp sqlite3.h sqlite3.h sqlite3.c)
add_library(main STATIC main.cpp)
set(sql3
        sqlite3.h
        sqlite3.c
        sqlite3ext.h
        )

target_link_libraries(main sql3)
