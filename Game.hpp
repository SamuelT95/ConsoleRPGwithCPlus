//
// Created by samue on 9/23/2022.
//

#ifndef PLAYGOUND1_GAME_HPP
#define PLAYGOUND1_GAME_HPP

#include "Player.hpp"
#include "Enemy.hpp"


struct Game {
    Player player;
    Game();
    void gameMenu();
    void fight();

    static void stats(const Player& player);
    void stats(const Enemy& Enemy);
};

#endif //PLAYGOUND1_GAME_HPP
