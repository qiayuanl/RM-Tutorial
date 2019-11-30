cmake_minimum_required(VERSION 3.6)
project(rm-tutorial)

include_directories("./include")
FILE(GLOB_RECURSE SOURCE_FILES "src/*.cpp")

add_executable(rational_test main.cpp ${SOURCE_FILES})
