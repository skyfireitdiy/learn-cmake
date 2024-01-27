cmake_minimum_required(VERSION 3.28)

project(checkenv)

add_executable(checkenv)
target_sources(checkenv PRIVATE main.cpp)

# 引入检测c++源文件编译的检测功能
include(CheckCXXSourceCompiles)

# 要编译的源码，如果通过，就设置HAS_HELLO
check_cxx_source_compiles("
    #include \"${CMAKE_CURRENT_SOURCE_DIR}/hello.h\"
    int main(){}
    "
    HAS_HELLO
)

# 如果HAS_HELLO被设置，就定义对应的宏
target_compile_definitions(checkenv PRIVATE
    $<$<BOOL:${HAS_HELLO}>:HAS_HELLO>
)

