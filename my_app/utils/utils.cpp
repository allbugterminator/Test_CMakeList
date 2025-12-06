#include "utils.h"
#include <algorithm>  // 用于std::transform、std::isspace等
#include <cctype>     // 用于字符处理函数
#include <sstream>    // 用于std::istringstream
#include <cmath>      // 用于数学函数（如阶乘实现可能用到）

namespace utils {

// 分割字符串：按指定分隔符将输入字符串拆分为子字符串向量
std::vector<std::string> split(const std::string& input, char delimiter) {
    std::vector<std::string> result;
    std::string token;
    std::istringstream tokenStream(input);  // 使用字符串流处理分割
    
    while (std::getline(tokenStream, token, delimiter)) {
        result.push_back(token);
    }
    return result;
}

// 转换为大写：将输入字符串所有字符转为大写
std::string toUpperCase(const std::string& input) {
    std::string result = input;
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);  // 使用标准算法转换大小写
    return result;
}

// 去除首尾空白：去除字符串开头和结尾的空格、制表符等
std::string trim(const std::string& input) {
    size_t start = input.find_first_not_of(" \t\n\r");
    if (start == std::string::npos) return "";  // 全空白字符串返回空
    size_t end = input.find_last_not_of(" \t\n\r");
    return input.substr(start, end - start + 1);
}

// 计算最大公约数（GCD）：使用欧几里得算法
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);  // 递归求解
}

// 计算阶乘：非递归实现，避免栈溢出
int factorial(int n) {
    if (n < 0) return -1;  // 错误处理：阶乘不支持负数
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// 计算数组元素和：遍历数组累加
double arraySum(const double arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

} // namespace utils