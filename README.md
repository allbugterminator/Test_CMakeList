# Test_CMakeList

# 1. 进入项目根目录
cd /hello_world

# 2. 创建并进入一个独立的构建目录（强烈推荐，保持源码清洁）
mkdir build
cd build

# 3. 配置项目，生成适用于你系统的构建文件（如Makefile）
cmake ..

# 4. 执行编译
cmake --build .  # 跨平台方式，或使用 make（在Linux/Mac上）

# 5. 运行程序
./hello_world