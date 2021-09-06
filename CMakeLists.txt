cmake_minimum_required(VERSION 3.20)
project(vulkanPractice)

add_definitions("-std=c++17")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

find_package(Vulkan REQUIRED FATAL_ERROR)

add_subdirectory(practice)
