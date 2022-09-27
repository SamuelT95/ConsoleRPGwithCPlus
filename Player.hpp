//
// Created by samue on 9/23/2022.
//

#ifndef PLAYGOUND1_PLAYER_HPP
#define PLAYGOUND1_PLAYER_HPP
#include <iostream>
using namespace std;

struct Player {
    const int healthMax = 30;
    int health = 30;
    string createEnemy();

    string name;
};


#endif //PLAYGOUND1_PLAYER_HPP
