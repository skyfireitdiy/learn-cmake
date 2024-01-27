cmake_minimum_required(VERSION 3.28)

project(interface)

# 将library设置为INTERFACE，那么它的编译链接选项就只会影响消费者
add_library(wall INTERFACE)
target_compile_options(wall INTERFACE -Wall)

add_library(cpp20 INTERFACE)
target_compile_options(cpp20 INTERFACE -std=c++20 -fconcepts)


add_executable(interface)
# 引入特定的编译选项
target_link_libraries(interface PRIVATE wall cpp20)
target_sources(interface PRIVATE main.cpp)

