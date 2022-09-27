//
// Created by samue on 9/23/2022.
//

#ifndef PLAYGOUND1_GAME_HPP
#define PLAYGOUND1_GAME_HPP

#include "Player.hpp"


struct Game {
    Player player;
    Game();
    void gameMenu();
    void fight();

    void stats();

    void stats(Player player);
};

#endif //PLAYGOUND1_GAME_HPP
