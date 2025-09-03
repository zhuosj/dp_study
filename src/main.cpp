#include <iostream>
#include <vector>
#include <chrono>
#include "dp_algorithms.h"

using namespace std;
using namespace dp;

int main() {
    std::cout << "动态规划学习示例" << std::endl;
    
    // 获取用户输入的n值
    std::cout << "请输入n的值: ";
    int n;
    std::cin >> n;

    // 测量斐波那契数列函数运行时间
    auto start = std::chrono::high_resolution_clock::now();
    unsigned long long fibResult = fibonacci(n);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> fibDuration = end - start;
    std::cout << "斐波那契数列第" << n << "项: " << fibResult << std::endl;
    std::cout << "斐波那契函数运行时间: " << fibDuration.count() << " 秒" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    
    // 测量爬楼梯函数运行时间
    start = std::chrono::high_resolution_clock::now();
    unsigned long long climbResult = climbStairs(n);
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> climbDuration = end - start;
    std::cout << "爬" << n << "级楼梯的方法数: " << climbResult << std::endl;
    std::cout << "爬楼梯函数运行时间: " << climbDuration.count() << " 秒" << std::endl;
    std::cout << "------------------------------------" << std::endl;

    // 示例：展示其他动态规划算法
    std::cout << "其他动态规划算法示例：" << std::endl;
    std::cout << "1. 最长公共子序列长度: " << longestCommonSubsequence("abcde", "ace") << std::endl;
    std::cout << "2. 0-1背包最大价值: " << knapsack({1, 3, 4, 5}, {1, 4, 5, 7}, 7) << std::endl;
    std::cout << "3. 零钱兑换最少硬币数: " << coinChange({1, 2, 5}, 11) << std::endl;

    return 0;
}