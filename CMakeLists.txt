cmake_minimum_required(VERSION 3.26)
project(zoocv8)

set(CMAKE_CXX_STANDARD 17)

add_executable(zoocv8 main.cpp
        Product.cpp
        Product.h
        Container.cpp
        Container.h
        Section.cpp
        Section.h)
