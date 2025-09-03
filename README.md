# 动态规划学习项目

这个项目旨在帮助学习和实践动态规划算法。通过实现各种动态规划问题，加深对算法思路的理解和掌握。

## 项目结构
- `CMakeLists.txt`: 项目构建配置文件
- `src/main.cpp`: 主程序文件，包含动态规划算法示例
- `README.md`: 项目说明文件

## 安装CMake

在构建项目之前，需要确保系统中已安装CMake。以下是在Ubuntu系统上安装CMake的方法：

### 对于Ubuntu 22.04用户（解决libssl1.1依赖问题）
Ubuntu 22.04默认使用libssl3，而部分CMake版本依赖libssl1.1。可以通过以下步骤安装libssl1.1：
```bash
echo "deb http://security.ubuntu.com/ubuntu focal-security main" | sudo tee /etc/apt/sources.list.d/focal-security.list
sudo apt-get update
sudo apt-get install libssl1.1
```

安装完成后，可以使用以下方法安装CMake：

### 方法1：使用APT包管理器（简单但版本可能较旧）
```bash
sudo apt update
sudo apt install cmake
```

### 方法2：使用PPA安装（推荐，可获得较新版本）
```bash
wget -O - https://apt.kitware.com/keys/kitware-archive-latest.asc 2>/dev/null | sudo apt-key add -
sudo apt-add-repository 'deb https://apt.kitware.com/ubuntu/ jammy main'
sudo apt update
sudo apt install cmake
```

### 方法3：从源代码编译安装（适合需要最新版本的用户）
1. 安装依赖项
```bash
sudo apt update
sudo apt install build-essential libssl-dev
```
2. 从[CMake官网](https://cmake.org/download/)下载源码并解压
3. 编译安装
```bash
cd cmake-<version>
./bootstrap
make -j$(nproc)
sudo make install
```

验证安装是否成功：
```bash
cmake --version
```

## 如何构建和运行

1. 创建构建目录并进入
```bash
mkdir build && cd build
```

2. 运行CMake生成构建文件
```bash
cmake ..
```

3. 编译项目
```bash
make
```

4. 运行可执行文件
```bash
./dp_study
```

## 动态规划示例

目前项目中包含以下动态规划示例：
1. 斐波那契数列 (Fibonacci Sequence)
2. 爬楼梯问题 (Climbing Stairs)

## 学习建议

1. 理解每个动态规划问题的状态定义和状态转移方程
2. 尝试自己实现示例中的算法，然后与现有代码对比
3. 在main.cpp中添加新的动态规划问题进行练习
4. 尝试优化算法空间复杂度（例如，使用滚动数组）

## 待添加的示例

以下是一些可以考虑实现的动态规划问题：
- 最长递增子序列 (Longest Increasing Subsequence)
- 最大子数组和 (Maximum Subarray)
- 0-1背包问题 (0-1 Knapsack)
- 编辑距离 (Edit Distance)
- 矩阵路径问题 (Matrix Path)

欢迎添加更多动态规划示例和改进！# dp_study
