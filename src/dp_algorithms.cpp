// dp_algorithms.cpp - 动态规划算法实现

#include "dp_algorithms.h"

namespace dp {

/**
 * @brief 斐波那契数列计算（动态规划方法）
 * @param n 要计算的斐波那契数的位置
 * @return 第n个斐波那契数
 */
unsigned long long fibonacci(unsigned int n) {
    if (n <= 1) {
        return n;
    }
    
    unsigned long long a = 0, b = 1, result = 0;
    for (unsigned int i = 2; i <= n; ++i) {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}

/**
 * @brief 爬楼梯问题（动态规划方法）
 * @param n 楼梯的阶数
 * @return 到达顶部的不同方法数
 */
unsigned long long climbStairs(unsigned int n) {
    if (n <= 2) {
        return n;
    }
    
    unsigned long long a = 1, b = 2, result = 0;
    for (unsigned int i = 3; i <= n; ++i) {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}

/**
 * @brief 最长公共子序列（LCS）问题
 * @param text1 第一个字符串
 * @param text2 第二个字符串
 * @return 最长公共子序列的长度
 */
int longestCommonSubsequence(const std::string& text1, const std::string& text2) {
    int m = text1.length();
    int n = text2.length();
    
    // 创建DP表格
    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));
    
    // 填充DP表格
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (text1[i - 1] == text2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    
    return dp[m][n];
}

/**
 * @brief 0-1背包问题
 * @param weights 物品重量数组
 * @param values 物品价值数组
 * @param capacity 背包容量
 * @return 背包能装下的最大价值
 */
int knapsack(const std::vector<int>& weights, const std::vector<int>& values, int capacity) {
    int n = weights.size();
    
    // 创建DP表格
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(capacity + 1, 0));
    
    // 填充DP表格
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= capacity; ++j) {
            if (weights[i - 1] <= j) {
                dp[i][j] = std::max(dp[i - 1][j], dp[i - 1][j - weights[i - 1]] + values[i - 1]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    
    return dp[n][capacity];
}

/**
 * @brief 零钱兑换问题
 * @param coins 硬币面额数组
 * @param amount 目标金额
 * @return 凑成目标金额所需的最少硬币数
 */
int coinChange(const std::vector<int>& coins, int amount) {
    // 初始化DP数组，设置为amount+1（表示无法到达）
    std::vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0; // 凑成0元需要0个硬币
    
    // 填充DP数组
    for (int i = 1; i <= amount; ++i) {
        for (int coin : coins) {
            if (coin <= i) {
                dp[i] = std::min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    
    // 如果dp[amount]仍然是初始值，说明无法凑成该金额
    return dp[amount] > amount ? -1 : dp[amount];
}

} // namespace dp