cmake_minimum_required(VERSION 3.19.1)

set(LIBS 
    gtest
    gtest_main
    DataStructures
)
enable_testing()
add_executable(tests UnitTests.cpp)
add_subdirectory(googletest)
target_include_directories(tests PUBLIC googletest/include 
    PUBLIC googletest/src
)
target_link_libraries(tests ${LIBS})