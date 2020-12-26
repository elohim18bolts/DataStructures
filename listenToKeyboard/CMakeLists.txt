cmake_minimum_required(VERSION 3.19.1)


set(this listenToKeyboard)
set(SRC
    src/kbd.cpp
)
set(HEADERS
    include/kbd/kbd.hpp
)


add_library(${this} STATIC ${SRC} ${HEADERS})
set_target_properties(${this} PROPERTIES FOLDER Libraries)
target_include_directories(${this} PUBLIC include)