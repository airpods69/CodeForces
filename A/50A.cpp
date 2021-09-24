#include <iostream>

int main() {
    int m,n;
    std::cin >> m >> n;

    int pro = m*n;

    if(pro%2 != 0)
        std::cout << (pro-1)/2;
    else
        std::cout << pro/2;

    return 0;
}
