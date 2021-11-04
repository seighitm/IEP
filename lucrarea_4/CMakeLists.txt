# CMake version
cmake_minimum_required(VERSION 3.16.3)

# Initialize the variable PROJECT NAME
set(PROJECT_NAME "main")

# Project name
project(${PROJECT_NAME} LANGUAGES CXX)  

# Collect all files in one list by regular expression
file(GLOB CPPS "./src/*.cpp" "./inc/*.hpp")

# Define the executable
add_executable(${PROJECT_NAME} ${CPPS})