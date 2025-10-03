#include "includes.hpp"

void core::coreMain() {
    systemInit();
    //mainLoop();
    //shutdown();
}

void core::systemInit() {
    std::cout << "System Initialization..." << std::endl;
    // Initialization code here

    sf::Window window(sf::VideoMode({800, 600}), "Core Window");
}

void core::mainLoop() {
    std::cout << "Entering Main Loop..." << std::endl;
    // Main loop code here
    while (true) {
        // Placeholder for loop condition
        break; // Remove this in actual implementation
    }
}

void core::shutdown() {
    std::cout << "Shutting down system..." << std::endl;
    // Cleanup code here
}

