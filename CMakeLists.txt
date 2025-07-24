cmake_minimum_required(VERSION 3.1...3.22)

project(SMESPMM LANGUAGES CXX)
include(CTest)
include_directories(./include)

include(cmake/gtest.cmake)
fetch_googletest(
    ${PROJECT_SOURCE_DIR}/cmake
    ${PROJECT_BINARY_DIR}/googletest
    )

enable_testing()


if(BUILD_TESTING)
  add_subdirectory(test)
endif()