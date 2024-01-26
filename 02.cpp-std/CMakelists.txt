cmake_minimum_required(VERSION 3.28)

project(cpp-std)

# 指定c++标准
set(CMAKE_CXX_STANDARD 20)
# 是否强制指定
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(cpp-std)

target_sources(cpp-std PRIVATE main.cpp)
