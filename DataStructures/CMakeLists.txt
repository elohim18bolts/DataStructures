cmake_minimum_required(VERSION 3.19.1)


set(this DataStructures)
set(SRC
    src/linklist.cpp
)


set(LIBNAME
    data_structures
)
add_library(${LIBNAME} STATIC ${SRC})
include_directories(include)