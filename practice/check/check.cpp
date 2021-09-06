#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>

#include <iostream>


int main() {
    VkInstanceCreateInfo info = {};

    VkInstance instance;

    if (vkCreateInstance(&info, nullptr, &instance) == VK_SUCCESS) {
        std::cout << "Vulkan is ready!" << std::endl;
    } else {
        std::cout << "Error!!!";
    }
}