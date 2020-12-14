cmake_minimum_required(VERSION 3.10.0)

set(this DataStructures)
project(${this} VERSION 1.0.1)

set(SRCMAIN 
    main/main.cpp
)
add_subdirectory(DataStructures)

add_executable(main ${SRCMAIN})
target_link_libraries(main ${this})



