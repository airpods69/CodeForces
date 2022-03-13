#include <bits/stdc++.h>
using namespace std;

bool checkVictory(int kiritoStrength, int dragonStregnth) {
    return (kiritoStrength > dragonStregnth) ? true : false;
}

map<int,int> setLevels (int levels) {

    map<int,int> Levels;
    int dStrength, bonus;

    for (int i = 0 ; i < levels ; i++) {
        cin >> dStrength >> bonus;
        if (Levels.find(dStrength) == Levels.end())
            Levels[dStrength] = bonus;
        else
            Levels[dStrength] += bonus;
    }

    return Levels;
}

bool checkVictoryLevels (int kStrength, map<int,int> Levels) {

    for (auto i : Levels) {
        if (checkVictory(kStrength, i.first))
            kStrength += i.second;
        else 
            return false;
    }

    return true;
}

// void display (map<int,int> m) {
//     for (auto i : m)
//         cout << i.first << ":" << i.second << endl; 
// }


int main() {
    int kiritoStrength, levels;
    cin >> kiritoStrength >> levels;

    map<int,int> Levels = setLevels(levels);

    (checkVictoryLevels(kiritoStrength, Levels)) ? cout << "YES" : cout << "NO"; 
}