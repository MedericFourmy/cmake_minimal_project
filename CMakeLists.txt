CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

PROJECT(cmake_minimal_project)

FIND_PACKAGE(Eigen3 3.3 REQUIRED CONFIG)

OPTION(BUILD_MAIN "Build main executable" ON)

ADD_LIBRARY(cmake_minimal_project src/operations.cpp)
TARGET_INCLUDE_DIRECTORIES(cmake_minimal_project PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
TARGET_LINK_LIBRARIES(cmake_minimal_project PUBLIC Eigen3::Eigen)

IF (BUILD_MAIN)
    message(WARNING "BUILDING main.cpp")
    ADD_EXECUTABLE(main src/main.cpp)
    TARGET_LINK_LIBRARIES(main PUBLIC cmake_minimal_project)
ENDIF()
