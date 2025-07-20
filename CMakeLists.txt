cmake_minimum_required(VERSION 2.8.9)

project (Week2)
set(CMAKE_CXX_STANDARD 11)

add_executable(Week2 week2.cpp NumberRange.h NumberRange.cpp
        TwoD_NumberRange.cpp
        TwoD_NumberRange.h
        ThreeD_NumberRange.cpp
        ThreeD_NumberRange.h
)
