cmake_minimum_required(VERSION 2.8)

project(test_cmake CXX)

include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

add_executable(class_sample src/main.cpp src/sample_class.cpp)          

add_executable(file_test src/file_test.cpp)          