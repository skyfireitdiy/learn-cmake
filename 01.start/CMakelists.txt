# 指定cmake最小支持版本
cmake_minimum_required(VERSION 3.28)

# 指定项目名称
project(start)

# 设置目标，将目标与依赖的源文件写在一起
# add_executable(start main.cpp add.cpp)

# 设置目标，但是不直接设置依赖，而是将依赖与目标声明分开
add_executable(start)
target_sources(start PRIVATE main.cpp add.cpp)

