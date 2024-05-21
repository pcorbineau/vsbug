cmake_minimum_required(VERSION 3.16)

project(vsbug)

add_executable(vsbug main.cpp Foo.h Foo.cpp)

target_compile_features(vsbug PRIVATE cxx_std_20)
