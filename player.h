#ifndef PLAYER_H
#define PLAYER_H

#include "game.h"
#include <string>

class Player {
private:
    std::string name;
    std::string location;
    int level;
    int health;
    int maxHealth;
    int damage;
    int gold;
    int experience;
    
public:
    // Constructor
    Player(std::string name, std::string location, int level, int damage) {
        this->name = name;
        this->location = location;
    }

    // Getters
    std::string getName() { return name; }
    std::string getLocation() { return location; }


    // Setters
    void setLocation(std::string newLocation) { location = newLocation; }
};

#endif
