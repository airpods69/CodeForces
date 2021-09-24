#include <iostream>

int main() {
    int w = 2;
    //std::cin >> w;

    if (w==2) std::cout << "NO";
    else {
        if (w<=100 && w>=1) {
            if (w%2 == 0) std::cout << "YES";
            else std::cout << "NO";
        }
    }
}