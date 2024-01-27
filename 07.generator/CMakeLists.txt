cmake_minimum_required(VERSION 3.28)

project(generator)

add_executable(generator)

target_sources(generator PRIVATE main.cpp)

# 如果debug为真，设置-g -O0，如果release为真，设置-O2
target_compile_options(generator PRIVATE
    "$<$<BOOL:${debug}>:-g;-O0>"
    "$<$<BOOL:${release}>:-O2>"
)
