# 指定CMake的最低版本要求
cmake_minimum_required(VERSION 3.10)
# 定义项目名称和编程语言
project(HelloWorld LANGUAGES CXX)
# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# 创建可执行文件
add_executable(hello_world main.cpp)
# 设置编译选项，开启常用警告
target_compile_options(hello_world PRIVATE -Wall -Wextra)