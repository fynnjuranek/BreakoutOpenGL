cmake_minimum_required(VERSION 3.0)
cmake_policy(VERSION 3.0)

project(BreakOut)

link_directories(libs)

add_library(GLAD src/glad.c)
set(LIBS ${LIBS} GLAD)


include_directories(${CMAKE_SOURCE_DIR}/includes)

add_executable(BreakOut src/Application.cpp)

target_link_libraries(BreakOut ${LIBS})