cmake_minimum_required(VERSION 3.28)
project(openGL)

set(CMAKE_CXX_STANDARD 20)

find_package(glfw3 REQUIRED)
find_package(GTest REQUIRED)

add_executable(openGL main.cpp src/math.cpp)
target_include_directories(openGL PRIVATE src)
target_link_libraries(openGL PRIVATE glfw)

add_executable(tests tests/test_math.cpp src/math.cpp
        tests/test_glwf_integration.cpp)
target_include_directories(tests PRIVATE src)
target_link_libraries(tests PRIVATE glfw GTest::gtest_main)
enable_testing()
add_test(NAME MathTests COMMAND tests)
