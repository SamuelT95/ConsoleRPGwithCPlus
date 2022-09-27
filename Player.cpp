//
// Created by samue on 9/23/2022.
//

#include <fstream>
#include "Player.hpp"
#include <vector>
#include <iostream>

using namespace std;

string Player::createEnemy() {
    ifstream file;
    file.open("instructors.txt");
    if (!file.is_open()) {
        cerr << "Could not find text file.";
        exit(1);
    }
    string firstName, lastName;
    vector<string> names;
    cout << "who do you want to fight?" << endl;

    while (file >> firstName >> lastName) {
        string fullName;
        fullName.append(firstName);
        fullName.append(" ");
        fullName.append(lastName);
        names.push_back(fullName);
    }
    for (int i = 0; i < names.size(); i++) {
        cout << i << ": " << names.at(i) << endl;
    }
    int choice;
    cin >> choice;


    file.close();
    return names.at(choice);
}