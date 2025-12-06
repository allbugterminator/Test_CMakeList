#include <iostream>
#include "utils.h"

int main() {
    // 测试字符串分割
    auto parts = utils::split("hello,world,cpp", ',');
    for (const auto& p : parts) std::cout << p << " ";  // 输出: hello world cpp

    // 测试大小写转换
    std::cout << utils::toUpperCase("Hello") << std::endl;  // 输出: HELLO

    // 测试数学函数
    std::cout << utils::gcd(12, 18) << std::endl;  // 输出: 6
    std::cout << utils::factorial(5) << std::endl;  // 输出: 120

    return 0;
}