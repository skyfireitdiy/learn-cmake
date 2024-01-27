cmake_minimum_required(VERSION 3.28)

project(option_)

add_executable(option_)
target_sources(option_ PRIVATE main.cpp)

# 设置一个选项，默认是关闭的，可以从命令行传参修改这个值
option(OPT_SET "set option" OFF)

# 如果选项开启，增加宏定义为yes，否则为no
if (OPT_SET)
    target_compile_definitions(option_ PRIVATE "OPTION_IS_SET=\"yes\"")
else()
    target_compile_definitions(option_ PRIVATE "OPTION_IS_SET=\"no\"")
endif()
