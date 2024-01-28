cmake_minimum_required(VERSION 3.28)

project(custom_command)

add_executable(custom_command)

target_sources(custom_command PRIVATE main.cpp)
target_include_directories(custom_command PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

# 添加自定义命令
add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/version.h
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    COMMAND bash ./gen_version.sh ${CMAKE_CURRENT_BINARY_DIR}/version.h
    COMMAND echo "generate git info"
)

add_custom_command(
    TARGET custom_command
    POST_BUILD
    COMMAND rm ${CMAKE_CURRENT_BINARY_DIR}/version.h
    COMMAND echo "delete ${CMAKE_CURRENT_BINARY_DIR}/version.h"
    )

# 添加一个自定义target，依赖于自定义命令的产出
add_custom_target(
    empty_target
    DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/version.h
)

# 设置主程序依赖自定义target，这样只要主程序需要重新编译，那么就会执行自定义target，进而执行自定义命令
add_dependencies(custom_command empty_target)
