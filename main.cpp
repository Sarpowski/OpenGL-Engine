#include <iostream>
#include "GL/glew.h"
#include "glfw/glfw3.h"

int main() {

    GLFWwindow* window;
    if(!glfwInit()){
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    glewInit();
    window = glfwCreateWindow(800, 600, "Hello GLFW", NULL, NULL);
    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window)){
        glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_TRIANGLES);
        glVertex2f(0.0f, 0.5f);   // top center
        glVertex2f(-0.5f, -0.5f); // bottom left
        glVertex2f(0.5f, -0.5f);  // bottom right
        glEnd();
        glfwSwapBuffers(window);

        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}
