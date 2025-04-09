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
            int getDamage() {
                return damage;
            }

           // Enemy health & damage

            public: 
            Enemy(int damage, int health) {
                this->damage = damage;
                this->health = health;
            }

            void takeDamage(Player& player) {
                if(damage == 100) {
                    health -= 100;
                   } else {
                    health -= 400;
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