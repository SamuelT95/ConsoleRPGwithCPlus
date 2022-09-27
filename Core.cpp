//
// Created by samue on 9/23/2022.
//

#include "Core.hpp"
#include "Player.hpp"
#include "Game.hpp"
#include <iostream>
using namespace std;

Core::Core() {
    isOn = true;
    menu();
}

void playGame() {
    Game game;
}

void Core::menu() {
    while (isOn) {
        cout << "Welcome to game. Menu: "
                "\n 0. Quit"
                "\n 1. Play"
                "\n>> ";
        cin >> choice; // cannot put in switch i guess..
        switch (choice) {
            case 1:
                cout << "Playing" << endl;
                playGame();
                break;

            case 0:
                cout << "Quitting game" << endl;
                isOn = false;
                break;
        }
    }
}

