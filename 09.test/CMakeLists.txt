cmake_minimum_required(VERSION 3.28)

project(test_)

add_library(add SHARED)
target_sources(add PRIVATE add.cpp)

add_executable(test_)
target_link_libraries(test_ PRIVATE add)
target_sources(test_ PRIVATE main.cpp)

# 激活测试
enable_testing()

# 测试用例名字和命令
add_test(NAME empty_input 
        COMMAND test_)

# 测试通过条件
set_tests_properties(empty_input 
PROPERTIES PASS_REGULAR_EXPRESSION "usage.+"
)

add_test(NAME single_number
COMMAND test_ 10
)

set_tests_properties(single_number 
PROPERTIES PASS_REGULAR_EXPRESSION "10"
)

add_test(NAME multi_number
COMMAND test_ 2 3 4 5
)

set_tests_properties(multi_number 
PROPERTIES PASS_REGULAR_EXPRESSION "14"
)
