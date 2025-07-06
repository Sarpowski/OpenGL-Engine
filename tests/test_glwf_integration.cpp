//
// Created by Can on 7/6/2025.
//
#include <gtest/gtest.h>
#include <GLFW/glfw3.h>


//GLFW integration test
TEST(GLFWIntegrationTest, Initialization) {
    ASSERT_TRUE(glfwInit()) << "GLFW initialization failed!";
    glfwTerminate();
}