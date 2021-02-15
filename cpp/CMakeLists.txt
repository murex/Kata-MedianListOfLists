cmake_minimum_required(VERSION 3.19.3)

project(Kata-MedianListOfLists CXX)

set(CMAKE_CXX_STANDARD 14)
enable_testing()

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib CACHE PATH "Where to place compiled static libraries.")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib CACHE PATH "Where to place compiled shared libraries.")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin CACHE PATH "Where to place compiled executables.")

# We use CPM for 3rd-party dependencies management
include(cmake/CPM.cmake)
include(cmake/FindGoogleTest.cmake)

add_library(Kata-MedianListOfLists-shared SHARED)

target_compile_definitions(Kata-MedianListOfLists-shared PRIVATE MEDIAN_LIST_OF_LISTS_EXPORTS)

target_sources(Kata-MedianListOfLists-shared
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src/kata/median_list_of_lists/MedianListOfLists.cpp
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include/kata/median_list_of_lists/MedianListOfLists.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/include/kata/median_list_of_lists/config.hpp
)

target_include_directories(Kata-MedianListOfLists-shared
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(Kata-MedianListOfLists-test)

target_sources(Kata-MedianListOfLists-test
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/test/MedianListOfListsTest.cpp
)

target_link_libraries(Kata-MedianListOfLists-test
    PRIVATE
        Kata-MedianListOfLists-shared
        gtest_main)

add_test(NAME ctest-Kata-MedianListOfLists COMMAND Kata-MedianListOfLists-test)

add_custom_target(Docs
    SOURCES
        ../README.md
        ../QuickRetrospective.md)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Kata-MedianListOfLists-test)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY XCODE_STARTUP_PROJECT Kata-MedianListOfLists-test)

set_property(TARGET Kata-MedianListOfLists-shared PROPERTY FOLDER "Kata")
set_property(TARGET Kata-MedianListOfLists-test PROPERTY FOLDER "Kata")
set_property(TARGET Docs PROPERTY FOLDER "Kata")

set_property(TARGET gtest gtest_main PROPERTY FOLDER "Third-Party/GoogleTest")

set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "CMake Generated")
