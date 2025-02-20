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
        this->level = level;
        this->damage = damage;
        this->health = 100;
        this->maxHealth = 100;
        this->gold = 0;
        this->experience = 0;
    }

    // Getters
    std::string getName() { return name; }
    std::string getLocation() { return location; }
    int getLevel() { return level; }
    int getHealth() { return health; }
    int getMaxHealth() { return maxHealth; }
    int getDamage() { return damage; }
    int getGold() { return gold; }
    int getExperience() { return experience; }

    // Setters
    void setLocation(std::string newLocation) { location = newLocation; }
    void setHealth(int newHealth) { health = newHealth; }
    void setDamage(int newDamage) { damage = newDamage; }
    void addGold(int amount) { gold += amount; }
    void removeGold(int amount) { gold -= amount; }
    void addExperience(int exp) { experience += exp; }
    void levelUp() { level++; maxHealth += 20; health = maxHealth; }
};

#endif
