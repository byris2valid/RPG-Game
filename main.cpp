#include "game.h"
#include <iostream>
#include <ctime>
#include "player.h"
#include "enemy.h"
#include <windows.h>

using namespace std;


  


// Function Prototypes



Player& shop(Player& account) {
    int quest;
    int weaponShop;
    int collectibles;

    return account;
}



Player& battle(Player& account) {
    int choice;
    int playerHealth = 100;
    int enemyHealth = 200;
    int playerDamage;
    int enemyDamage;

    while(true) {
        cout << "press 1 to attack" << endl;
        cout << "press 2 to run" << endl;
        cin >> choice;
        if (choice == 1) {
            // Add battle logic here
        } else if (choice == 2) {
            break;
        }
    }
    return account;
}

int main() {
    string name;
    int choice1;
    cout << "Hello, please enter your username" << endl;
    cin >> name;
    
    string location[3] = {"The Cave", "The City", "Home"};
    Player account(name, location[0], 1, 2);
    
    cout << "Enter where you would like to travel" << endl;
    
    while(true) {
        Sleep(500);
        cout << "press 1 to travel to the cave" << endl;
        cout << "press 2 to travel to the city" << endl;
        cout << "press 3 to go home" << endl;
        
        cin >> choice1;
        
        switch(choice1) {
            case 1:
                cout << "Traveling to the cave" << endl;
                account.setLocation(location[0]);
                break;
            case 2:
                cout << "Traveling to the city" << endl;
                account.setLocation(location[1]);
                break;
            case 3:
                cout << "Traveling to home" << endl;
                account.setLocation(location[2]);
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
    
    return 0;
}