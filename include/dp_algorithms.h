// dp_algorithms.h - 动态规划算法头文件

#ifndef DP_ALGORITHMS_H
#define DP_ALGORITHMS_H

#include <vector>
#include <string>
#include <algorithm>

namespace dp {

/**
 * @brief 斐波那契数列计算（动态规划方法）
 * @param n 要计算的斐波那契数的位置
 * @return 第n个斐波那契数
 */
unsigned long long fibonacci(unsigned int n);

/**
 * @brief 爬楼梯问题（动态规划方法）
 * @param n 楼梯的阶数
 * @return 到达顶部的不同方法数
 */
unsigned long long climbStairs(unsigned int n);

/**
 * @brief 最长公共子序列（LCS）问题
 * @param text1 第一个字符串
 * @param text2 第二个字符串
 * @return 最长公共子序列的长度
 */
int longestCommonSubsequence(const std::string& text1, const std::string& text2);

/**
 * @brief 0-1背包问题
 * @param weights 物品重量数组
 * @param values 物品价值数组
 * @param capacity 背包容量
 * @return 背包能装下的最大价值
 */
int knapsack(const std::vector<int>& weights, const std::vector<int>& values, int capacity);

/**
 * @brief 零钱兑换问题
 * @param coins 硬币面额数组
 * @param amount 目标金额
 * @return 凑成目标金额所需的最少硬币数
 */
int coinChange(const std::vector<int>& coins, int amount);

} // namespace dp

#endif // DP_ALGORITHMS_H