#include "Game.h"
#include <iostream>

int main()
{
    if (glfwVulkanSupported())
    {
        std::cout << "Vulkan is on";
    }

    Game game(1280, 720);
    game.init();
    return 0;
}
