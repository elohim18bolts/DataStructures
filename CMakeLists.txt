cmake_minimum_required(VERSION 3.19.1)

set(THIS DataStructures)
project(${THIS} VERSION 1.0.1)

set(SRCMAIN 
    main/main.cpp
)
add_subdirectory(DataStructures)


include_directories(${THIS}/include)
add_executable(main ${SRCMAIN})
target_link_libraries(main data_structures)



