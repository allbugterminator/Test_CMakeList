# 1. 指定CMake最低版本要求
cmake_minimum_required(VERSION 3.15)
# 2. 定义项目名称、版本和编程语言
project(MyApp VERSION 1.0 LANGUAGES CXX)

# 3. 设置C++标准（C++11是现代项目的常见选择）
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON) # 强制要求使用C++11标准

# 4. 全局编译选项（根据需要进行调整）
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra") # 开启常用警告

# 5. 添加子目录，构建utils库
#    此命令会执行 utils/ 目录下的 CMakeLists.txt
add_subdirectory(utils)

# 6. 创建主可执行文件，并指定源文件
add_executable(${PROJECT_NAME} main.cpp) # ${PROJECT_NAME} 就是 "MyApp"

# 7. 为主程序链接依赖库
#    链接我们自定义的 utils 库，并链接系统的pthread库
target_link_libraries(${PROJECT_NAME} PRIVATE utils pthread)

# 8. (可选) 设置可执行文件的输出目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin)