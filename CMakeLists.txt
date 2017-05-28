cmake_minimum_required(VERSION 3.7)
project(CLibraryBooks)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Library.cpp Libraray.h Book.cpp Book.h)
add_executable(CLibraryBooks ${SOURCE_FILES})