#ifndef ENEMY_H
#define ENEMY_H
#include "game.h"
#include "player.h"
#include <string>

using namespace std;


     class Enemy {
        private:
            int strength;
            int health;
            int damage;
            int weapons;
            int armor;

           // Enemy health & damage

            public: 
            Enemy(int damage, int health) {
                this->damage = damage;
                this->health = health;
            }

            void takeDamage(int damage) {
                health -= damage;
                if(health - 0) {
                    health = 0;
                }
            }

            // Enemy strength 

            void setStrength(int strength, int level) {
               this->strength = 100 + (level * 30);
               if(level <= 5) {
                this->strength = 100;
               }
            }     
        };















#endif