cmake_minimum_required(VERSION 3.16)
project(untitled2)

set(CMAKE_CXX_STANDARD 20)

file(GLOB _SRC
        "*.h"
        "*.cpp"
        )

add_executable(Test ${_SRC})
