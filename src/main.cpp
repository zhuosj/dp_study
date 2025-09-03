#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <chrono>  // 用于时间测量

// 动态规划示例：斐波那契数列
int fibonacci(int n) {
    if (n <= 1) return n;
    std::vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

// 动态规划示例：斐波那契数列(带备忘录)
int helper(std::vector<int>& memo,int N){
    if(N==1 || N==2) return 1;
    if(memo[N]!=0) return memo[N];
    memo[N] = helper(memo,N-1) + helper(memo,N-2);
    return memo[N];
}

int fib(int N){
    if(N<1) return 0;
    std::vector<int> memo(N+1,0);
    return helper(memo,N);
}




// 动态规划示例：爬楼梯
int climbStairs(int n) {
    if (n <= 2) return n;
    std::vector<int> dp(n + 1);
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main() {
    std::cout << "动态规划学习示例" << std::endl;
    
    // 获取用户输入的n值
    std::cout << "请输入n的值: ";
    int n;
    std::cin >> n;

    // 测量斐波那契数列函数运行时间
    auto start = std::chrono::high_resolution_clock::now();
    int fibResult = fibonacci(n);
    auto end = std::chrono::high_resolution_clock::now();
    auto fibDuration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    std::cout << "斐波那契数列第" << n << "项: " << fibResult << std::endl;
    std::cout << "斐波那契函数运行时间: " << fibDuration << " 纳秒" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    // 测量斐波那契数列函数备忘录运行时间
    start = std::chrono::high_resolution_clock::now();
    int fib1Result = fib(n);
    end = std::chrono::high_resolution_clock::now();
    auto fib1Duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    std::cout << "斐波那契数列第" << n << "项: " << fib1Result << std::endl;
    std::cout << "斐波那契函数运行时间: " << fib1Duration << " 纳秒" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    // 测量爬楼梯函数运行时间
    start = std::chrono::high_resolution_clock::now();
    int climbResult = climbStairs(n);
    end = std::chrono::high_resolution_clock::now();
    auto climbDuration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    std::cout << "爬" << n << "级楼梯的方法数: " << climbResult << std::endl;
    std::cout << "爬楼梯函数运行时间: " << climbDuration << " 纳秒" << std::endl;

    return 0;
}