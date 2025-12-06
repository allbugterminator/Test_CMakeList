#ifndef UTILS_H  // 头文件保护宏，防止重复包含
#define UTILS_H

#include <string>
#include <vector>

// 将工具函数封装在命名空间utils中，避免命名冲突
namespace utils {

// 字符串处理函数
std::vector<std::string> split(const std::string& input, char delimiter);  // 按分隔符分割字符串
std::string toUpperCase(const std::string& input);  // 将字符串转换为大写
std::string trim(const std::string& input);  // 去除字符串首尾空白字符

// 数学计算函数
int gcd(int a, int b);  // 计算最大公约数
int factorial(int n);  // 计算阶乘

// 数组操作函数（需注意内存管理）
double arraySum(const double arr[], int size);  // 计算数组元素和

} // namespace utils

#endif // UTILS_H