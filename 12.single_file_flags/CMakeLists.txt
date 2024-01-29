cmake_minimum_required(VERSION 3.28)

project(single-file-flags)

add_executable(single-file-flags)

target_sources(single-file-flags PRIVATE main.cpp add/add.cpp)
target_include_directories(single-file-flags PRIVATE add)

# 获取target的属性SOURCES，此属性表示该target的所有源码
get_target_property(sources single-file-flags SOURCES)

# 遍历源文件
foreach(source ${sources})
    # 获取文件名（不带目录）
    get_filename_component(filename ${source} NAME)
    # 设置源文件的属性
    set_source_files_properties(${source} PROPERTIES COMPILE_DEFINITIONS "__SHORT_FILE__=\"${filename}\"")
endforeach(source ${sources})

