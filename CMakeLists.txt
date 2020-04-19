#
# Copyright (c) 2020 Naveen Ravichandrasekaran.
# See LICENSE in top-level directory for Copyright information.
#

cmake_minimum_required(VERSION 2.6)
project(CCIUnitTests)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add nsort libraries
include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/src)

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests
               test/test_main.cpp
               test/test_template.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
