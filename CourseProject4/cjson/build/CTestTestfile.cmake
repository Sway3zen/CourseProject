# CMake generated Testfile for 
# Source directory: C:/Users/Dell/Documents/GitHub/CourseProject/CourseProject4/cjson
# Build directory: C:/Users/Dell/Documents/GitHub/CourseProject/CourseProject4/cjson/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(cJSON_test "C:/Users/Dell/Documents/GitHub/CourseProject/CourseProject4/cjson/build/cJSON_test")
  set_tests_properties(cJSON_test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Dell/Documents/GitHub/CourseProject/CourseProject4/cjson/CMakeLists.txt;252;add_test;C:/Users/Dell/Documents/GitHub/CourseProject/CourseProject4/cjson/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(cJSON_test "C:/Users/Dell/Documents/GitHub/CourseProject/CourseProject4/cjson/build/cJSON_test")
  set_tests_properties(cJSON_test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Dell/Documents/GitHub/CourseProject/CourseProject4/cjson/CMakeLists.txt;252;add_test;C:/Users/Dell/Documents/GitHub/CourseProject/CourseProject4/cjson/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(cJSON_test "C:/Users/Dell/Documents/GitHub/CourseProject/CourseProject4/cjson/build/cJSON_test")
  set_tests_properties(cJSON_test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Dell/Documents/GitHub/CourseProject/CourseProject4/cjson/CMakeLists.txt;252;add_test;C:/Users/Dell/Documents/GitHub/CourseProject/CourseProject4/cjson/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(cJSON_test "C:/Users/Dell/Documents/GitHub/CourseProject/CourseProject4/cjson/build/cJSON_test")
  set_tests_properties(cJSON_test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Dell/Documents/GitHub/CourseProject/CourseProject4/cjson/CMakeLists.txt;252;add_test;C:/Users/Dell/Documents/GitHub/CourseProject/CourseProject4/cjson/CMakeLists.txt;0;")
else()
  add_test(cJSON_test NOT_AVAILABLE)
endif()
subdirs("tests")
subdirs("fuzzing")
