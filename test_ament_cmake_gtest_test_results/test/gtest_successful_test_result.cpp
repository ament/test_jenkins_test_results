// Copyright 2015 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <gtest/gtest.h>

// the first argument will be the testsuite name as well as
// the testcase classname in the result file
// the second argument will be the testcase name in the result file
TEST(test_ament_cmake_gtest_test_results, test_function_successful) {
  printf("normal message\n");
  // the error message might appear before the normal message
  // since stderr is implicitly being flushed after the newline
  // while stdout is only implicitly flushed at the end of the test
  fprintf(stderr, "error message\n");
  ASSERT_EQ(0, 0);
}
