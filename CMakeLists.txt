cmake_minimum_required(VERSION 3.19.1)

set(this DataStructures)
project(${this} VERSION 1.0.1)

set(SRCMAIN 
    main/main.cpp
)
set( Libraries 
    # listenToKeyboard
    DataStructures
)
add_subdirectory(listenToKeyboard)
add_subdirectory(DataStructures)
add_subdirectory(tests)
add_executable(main ${SRCMAIN})
target_link_libraries(main ${Libraries}) 




