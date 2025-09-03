cmake_minimum_required(VERSION 3.10)

# 设置项目名称和版本
project(dp_study VERSION 1.0)

# 指定C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加编译选项
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    # 对于GCC和Clang编译器
    add_compile_options(-Wall -Wextra -Wpedantic)
elseif (MSVC)
    # 对于MSVC编译器
    add_compile_options(/W4)
endif()

# 添加可执行文件
add_executable(dp_study src/main.cpp)

# 如果有多个源文件，可以使用以下方式
# file(GLOB SOURCES "src/*.cpp")
# add_executable(dp_study ${SOURCES})

# 可选：启用测试
# enable_testing()
# add_subdirectory(tests)