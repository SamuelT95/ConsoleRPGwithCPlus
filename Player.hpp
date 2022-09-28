//
// Created by samue on 9/23/2022.
//

#ifndef PLAYGOUND1_PLAYER_HPP
#define PLAYGOUND1_PLAYER_HPP
#include <iostream>
using namespace std;

struct Player {
    int healthMax = 30;
    int health = 30;
    void createEnemy();
    string name = "You";
};


#endif //PLAYGOUND1_PLAYER_HPP
