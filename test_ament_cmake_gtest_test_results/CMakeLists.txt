cmake_minimum_required(VERSION 2.8.3)

project(test_ament_cmake_gtest_test_results)

if(NOT WIN32)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()

find_package(ament_cmake REQUIRED)

if(AMENT_ENABLE_TESTING)
  find_package(ament_cmake_gtest REQUIRED)

  ament_add_gtest(
    gtest_successful_test_result
    "test/gtest_successful_test_result.cpp"
    TIMEOUT 10
  )
  ament_add_gtest(
    gtest_failure_test_result
    "test/gtest_failure_test_result.cpp"
    TIMEOUT 10
  )
  ament_add_gtest(
    gtest_timeout_test_result
    "test/gtest_timeout_test_result.cpp"
    TIMEOUT 1
  )
endif()
