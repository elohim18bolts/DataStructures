cmake_minimum_required(VERSION 3.10.2)


set(this DataStructures)
set(SRC 
    src/linklist.cpp
)


include_directories(include)

add_library(${this} STATIC ${SRC})