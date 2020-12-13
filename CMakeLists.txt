cmake_minimum_required(VERSION 3.10.2)

set(THIS DataStructures)
project(${THIS} VERSION 1.0.1)

set(SRC 
    main/main.cpp
)
add_subdirectory(${THIS})



add_executable(main ${SRC})
target_link_libraries(main ${THIS})



