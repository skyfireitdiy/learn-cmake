cmake_minimum_required(VERSION 3.28)

# 在project中设置版本号，可以设置4级，对应major/minor/patch/tweak
# 会生成内置的变量 <projectName>_VERSION_MAJOR ...
project(version VERSION 6.5.4.3)

# 设置一些自己的属性
set(MYKEY myvalue)

# 模板替换，将version.h.in中的@key@替换为 value，如此处将 @MYKEY@ 替换为 myvalue
configure_file(version.h.in version.h)

add_executable(version)

target_sources(version PUBLIC main.cpp)

# 记得添加config的输出路径，输出默认在二进制产物目录，可以修改改变
target_include_directories(version PUBLIC "${PROJECT_BINARY_DIR}")
