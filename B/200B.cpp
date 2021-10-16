#include <iostream>

int main() {
    int n;
    double pert, sum=0;
    std::cin >> n;

    for (int i=0; i<n ; i++) {
        std::cin >> pert;
        sum += pert/n;
    }

    std::cout << sum;
//fuck you
    return 0;
}