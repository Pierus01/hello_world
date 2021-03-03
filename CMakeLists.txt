cmake_minimum_required(VERSION 3.12)

# Define a "project", providing a description and a programming language

project(hello_world 
    VERSION 1.0
    DESCRIPTION "Hello world in C++"
    LANGUAGES CXX
)

# Our "project" will be able to build an executable out of a C++ source file
add_executable(hello_world 
    src/main.cxx
)

# Force the compiler to use the C++17 standard
target_compile_features(hello_world PUBLIC cxx_std_17)