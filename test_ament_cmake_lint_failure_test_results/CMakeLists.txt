cmake_minimum_required(VERSION 2.8.3)

# use double pound in the next line to not be interpreted as a pragma
## lint_cmake: extra space between function name and open parenthesis
project (test_ament_cmake_lint_failure_test_results)

find_package(ament_cmake REQUIRED)

if(AMENT_ENABLE_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

# TODO should not install anything
ament_package()
