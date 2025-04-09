#ifndef PLAYER_H
#define PLAYER_H
#include "game.h"
#include <string>

using namespace std;

class Player {
private:
    std::string name;
    std::string location;
    int inventory;
    int level;
    int damage;
    int health;
    int skills;

    public:
    // Constructor
    Player(std::string name, std::string location) {
        this->name = name;
        this->location = location;
    }

    // Getters
    std::string getName() { return name; }
    std::string getLocation() { return location; }

    // Setters
    void setLocation(std::string newLocation) { 
        location = newLocation; 
    }

    void selectInventory(int inventory) { 
         int choice;

           if (choice == 1) {
            cout << "pickaxe" << endl; 
           } else if (choice == 2) {

           }
    }
};

#endif
