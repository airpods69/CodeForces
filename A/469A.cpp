#include <iostream>

int Check(int num, int level[], int input) {
    for (int i = 0; i<num ; i++) {
        if (input == level[i])
            return 1;
    }

    return 0;
}

int main() {
    int n, x, y;
    std::cin >> n;

    std::cin >> x;
    
    int input;
    int level[n];
    for (int i = 0; i<x ; i++){
        std::cin >> input;
        if (Check(n, X, input) == 1)
            continue;

        level[i] = input;
    }
}
