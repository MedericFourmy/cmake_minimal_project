CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

PROJECT(cmake_minimal_project)

ADD_LIBRARY(cmake_minimal_project src/operations.cpp)
message("")
message(${CMAKE_CURRENT_SOURCE_DIR})
TARGET_INCLUDE_DIRECTORIES(cmake_minimal_project PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

ADD_EXECUTABLE(main src/main.cpp)
TARGET_LINK_LIBRARIES(main PUBLIC cmake_minimal_project)
