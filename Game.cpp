//
// Created by samue on 9/23/2022.
//
#include <iostream>
#include "Game.hpp"
using namespace std;

void Game::stats(Player player) {
    cout << "Name: " << player.name << " | Stats: Health: " << player.health << endl;
}

void Game::fight() {
    Player enemy;
    enemy.name = enemy.createEnemy();
    stats(enemy);

//    stats(enemy);
//    stats(player);
}

void Game::gameMenu() {
    bool isOn = true;
    int options;
    while (isOn) {
        cout << "Game menu: "
                "\n 1. Fight Arron Ferguson"
                "\n 2. Drink from a water fountain at BCIT"
                "\n 0. Quit"
                "\n << " << endl;
        cin >> options;
        switch (options) {
            case 1:
                fight();
//                cout << "Arron Ferguson used Rick-Roll."
//                        "\n Arron Ferguson escaped!" << endl;
                break;
            case 2:
                cout << "Drinking water at BCIT" << endl;
                player.health = player.healthMax;
                cout << "Health: " << player.health << endl;
                break;
            case 0:
                isOn = false;
                cout << "bye" << endl;
                break;
        }
    }

}

Game::Game() {
    cout << "This is your health: "<< player.health << endl;
    cout << "This is your MAX health: "<< player.healthMax << endl;
    player.health = player.health / 2;
    cout << "You studied too hard, lose half ur health, you should go get health from a water fountain dude" << endl;
    cout << "This is your health: "<< player.health << endl;
    gameMenu();
}
