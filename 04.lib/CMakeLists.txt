# 指定cmake最小支持版本
cmake_minimum_required(VERSION 3.28)

# 指定项目名称
project(useadd)

# useadd 没有添加include_directories ，因为add_s中将 include_directories 设置为 PUBLIC 了，消费者会自动引入
add_executable(useadd)

add_subdirectory(add)

target_link_libraries(useadd PRIVATE add_s)

# target_link_libraries(useadd PRIVATE add_d)

target_sources(useadd PRIVATE main.cpp)
