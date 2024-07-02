cmake_minimum_required(VERSION 3.10)

# Project name
project(BankManagementSystem)

# C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/main.cpp
    src/Account.cpp
    src/Login.cpp
    src/Load.cpp
)

# Executable target

