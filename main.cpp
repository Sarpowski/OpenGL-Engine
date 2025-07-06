#include <iostream>
#include "glfw/glfw3.h"

int main() {

    if (!glfwInit()) {
        std::cerr << "GLFW initialization failed!" << std::endl;
        return -1;
    }
    else{
        std::cout << "GLFW initialized successfully!" << std::endl;
    }
    glfwTerminate();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
