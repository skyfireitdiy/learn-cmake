cmake_minimum_required(VERSION 3.28)

project(add)

# 创建一个静态库
add_library(add_s STATIC)
target_sources(add_s PRIVATE add.cpp)
# 添加头文件包含路径，并将其设置为PUBLIC
# PUBLIC：生产者与消费者都需要
# PRIVATE：生产者需要，消费者不需要
# INTERFACE： 生产者不需要，消费者需要
target_include_directories(add_s PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# 创建一个动态库
# add_library(add_d SHARED)
# target_sources(add_d PRIVATE add.cpp)
# target_include_directories(add_d PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
