# cmake最低版本号要求
cmake_minimum_required(VERSION 2.8)

# 项目名
project(WebServer)

#最开始使用的add_compile_options(),但是无效，版本原因

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -Wall -Wextra -lpthread")

# 将给定的路径添加到编译器搜索包含文件（.h文件）的路径列表中。
include_directories(include)

# 设置源文件目录为src，并将其赋值给环境变量DIR_SRCS
aux_source_directory(src DIR_SRCS)

# 将变量DIR_SRCS的源文件编译成一个名为WebServer的可执行文件
add_executable(WebServer main.cpp ${DIR_SRCS})