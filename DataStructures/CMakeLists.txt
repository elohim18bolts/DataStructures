cmake_minimum_required(VERSION 3.10.0)


set(this DataStructures)
set(SRC
    src/linklist.cpp
    src/binaryTree.cpp
)
set(HEADERS
    include/linklist/linklist.hpp
    include/binarytree/binaryTree.hpp
    include/node/node.hpp
)


add_library(${this} STATIC ${SRC} ${HEADERS})
set_target_properties(${this} PROPERTIES FOLDER Libraries)
target_include_directories(${this} PUBLIC include)