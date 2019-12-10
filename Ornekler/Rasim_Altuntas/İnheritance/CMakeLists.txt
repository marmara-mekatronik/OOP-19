cmake_minimum_required(VERSION 3.14)
project(Kutuphane_Olusturma)

set(CMAKE_CXX_STANDARD 17)

add_executable(Kutuphane_Olusturma main.cpp TTB.cpp TTB.h)

SET(APP
        TTB.cpp
        TTB.h)

ADD_EXECUTABLE(${APP} main.cpp)
