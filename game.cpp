#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include  "game.h"


Game::Game() {
    choice = 0;
    playing = true;
}



// Functions 

void Game::mainMenu() {
    
    switch (choice) {
        case 0:
            playing = false;
            std::cout << "Leaving game" << std::endl;
            break;
        case 1:
            std::cout << "Traveling" << std::endl;
            break;
        case 2: 
            std::cout << "Opening Inventory" << std::endl;
            break;
        case 3:
            std::cout << "Opening shop" << std::endl;
            break;
        case 4:
            std::cout << "Leveling Up" << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
    }
    std::cout << "\n";
}