cmake_minimum_required(VERSION 2.8.3)

project(test_ament_cmake_nose_test_results NONE)

find_package(ament_cmake REQUIRED)

if(AMENT_ENABLE_TESTING)
  find_package(ament_cmake_nose REQUIRED)

  ament_add_nose_test(
    nose_successful_test_result
    "test/nose_successful_test_result.py"
    TIMEOUT 10
  )
  ament_add_nose_test(
    nose_failure_test_result
    "test/nose_failure_test_result.py"
    TIMEOUT 10
  )
  ament_add_nose_test(
    nose_timeout_test_result
    "test/nose_timeout_test_result.py"
    TIMEOUT 1
  )
endif()
