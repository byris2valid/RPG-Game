#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;

class Game {
   public:
       Game();
       ~Game();
       
       // Accessories
       bool isPlaying() { return this->playing; }

       // Functions 
       void mainMenu();

   private: 
       int choice; 
       bool playing;
};

#endif 

