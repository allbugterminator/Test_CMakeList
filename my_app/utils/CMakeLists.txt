# 1. 创建了一个名为 'utils' 的静态库目标
#    并列出了构建该库所需的所有源文件
add_library(utils STATIC utils.cpp)

# 2. 设置库的头文件包含路径
#    PUBLIC 表示：任何链接了 utils 库的目标（如主程序）都会自动获得此头文件路径
target_include_directories(utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# 3. 为这个库设置特定的编译定义（可选）
#    PRIVATE 表示：此定义仅用于编译 utils 库本身，不会传递给链接它的目标
target_compile_definitions(utils PRIVATE USE_DEBUG=1)