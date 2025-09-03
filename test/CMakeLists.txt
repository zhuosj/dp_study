# 测试目录的CMake配置文件

# 设置测试名称前缀
set(TEST_PREFIX "test_")

# 查找Google Test框架（如果需要）
# find_package(GTest REQUIRED)
# include_directories(${GTEST_INCLUDE_DIRS})

# 添加测试可执行文件示例
# add_executable(${TEST_PREFIX}example test_example.cpp)
# target_link_libraries(${TEST_PREFIX}example dp_study ${GTEST_BOTH_LIBRARIES})

# 添加测试示例
# add_test(NAME example_test COMMAND ${TEST_PREFIX}example)

# 可以通过以下方式自动添加所有测试文件
# file(GLOB TEST_SOURCES "*.cpp")
# foreach(test_source ${TEST_SOURCES})
#     get_filename_component(test_name ${test_source} NAME_WE)
#     add_executable(${TEST_PREFIX}${test_name} ${test_source})
#     target_link_libraries(${TEST_PREFIX}${test_name} dp_study ${GTEST_BOTH_LIBRARIES})
#     add_test(NAME ${test_name}_test COMMAND ${TEST_PREFIX}${test_name})
# endforeach()

# 如果没有测试文件，添加一个占位符测试
add_test(NAME no_tests COMMAND ${CMAKE_COMMAND} -E echo "No tests available yet")