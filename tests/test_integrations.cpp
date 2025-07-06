//
// Created by Can on 7/6/2025.
//
#include <gtest/gtest.h>
#include "GL/glew.h"
#include <GLFW/glfw3.h>


//GLFW integration test
TEST(GLFWIntegrationTest, Initialization) {
    ASSERT_TRUE(glfwInit()) << "GLFW initialization failed!";
    glfwTerminate();
}

//Glew integration test
TEST(GlewIntegrationTest, Initialization) {
    ASSERT_TRUE(glfwInit());

    GLFWwindow* window = glfwCreateWindow(
            100, 100,
            "Test", nullptr, nullptr);

    ASSERT_NE(window, nullptr);

    glfwMakeContextCurrent(window);

    GLenum err = glewInit();
    ASSERT_EQ(err, GLEW_OK) << "GLEW initialization failed: " << glewGetErrorString(err);

    glfwDestroyWindow(window);
    glfwTerminate();
}