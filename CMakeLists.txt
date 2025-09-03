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

# 添加头文件搜索路径
include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/third_party
)

# 添加可执行文件
add_executable(dp_study 
    src/main.cpp
    src/dp_algorithms.cpp
)

# 启用测试
enable_testing()

# 添加测试子目录
if (EXISTS ${PROJECT_SOURCE_DIR}/test/CMakeLists.txt)
    add_subdirectory(test)
endif()

# 添加文档构建支持
option(BUILD_DOC "Build documentation" OFF)
if(BUILD_DOC)
    # 可以在这里添加文档构建配置
    message(STATUS "Documentation build enabled")
endif()

# 安装配置
install(TARGETS dp_study DESTINATION bin)
install(DIRECTORY include/ DESTINATION include)