cmake_minimum_required(VERSION 3.28)

project(install_)

add_library(add SHARED)
target_sources(add PRIVATE add.cpp)

add_executable(install_)
target_link_libraries(install_ PRIVATE add)
target_sources(install_ PRIVATE main.cpp)

# 安装库
install(TARGETS add DESTINATION lib)
# 安装二进制文件
install(TARGETS install_ DESTINATION bin)
# 安装头文件
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/add.h DESTINATION include)

