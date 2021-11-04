# CMake version
cmake_minimum_required(VERSION 3.16.3)

set(PROJECT_NAME "main")

# Project name
project(${PROJECT_NAME})  

# Define the executable
add_executable(${PROJECT_NAME}
		./src/main.cpp
		./src/Figure.cpp
		./src/Circle.cpp
		./src/Rectangle.cpp
		./inc/main.hpp
		./inc/Figure.hpp
		./inc/Circle.hpp
		./inc/Rectangle.hpp)