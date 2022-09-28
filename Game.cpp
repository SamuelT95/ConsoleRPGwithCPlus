//
// Created by samue on 9/23/2022.
//
#include <iostream>
#include "Game.hpp"
#include "Enemy.hpp"

#define RED     "\033[31m"      /* Red */
#define RESET   "\033[0m"
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */

using namespace std;

void Game::stats(const Player& player) {
    cout << BOLDBLUE << "Name: " << player.name << " | Stats: Health: " << player.health << RESET << endl;
}
void Game::stats(const Enemy& enemy) {
    cout << BOLDBLUE << "Name: " << player.name << " | Stats: Health: " << player.health << RESET << endl;
}

void Game::fight() {
    Enemy enemy;
    enemy.createEnemy();
    stats(enemy);

//    stats(enemy);
//    stats(player);
}

void Game::gameMenu() {
    bool isOn = true;
    int options;
    while (isOn) {
        cout << "Game menu: "
                "\n 1. Fight "
                "\n 2. Restore HP at Student Health"
                "\n 0. Quit"
                "\n << " << endl;
        cin >> options;
        switch (options) {
            case 1:
                fight();
                break;
            case 2:
                cout << "Health restored back to full." << endl;
                player.health = player.healthMax;
                stats(player);
                break;
            case 0:
                isOn = false;
                cout << "bye" << endl;
                break;
        }
    }

}

Game::Game() {
    cout << "Welcome to BCIT C++ console rpg. These are your stats:" << endl;
    cout << BOLDBLUE << "max health: " << player.healthMax << endl;
    cout << "current health: " << player.health << RESET << endl;
    cout << "If you get hurt, you can restore your health back at BCIT Student Health clinic." << endl;
    cout << RED << "You taken " << player.health / 2 << " damage." << RESET << endl;
    player.health = player.health / 2;
    cout << "Your health is now at " << player.health << endl;
    gameMenu();
}
