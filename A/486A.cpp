#include <iostream>
#include <cmath>

int even_odd(int64_t x) {
    if (x%2 == 0)
        return 1;
    return 0;
}

int main() {
    int64_t n,sum;
    std::cin >> n;
    if (even_odd(n)==1) 
        std::cout << n/2;
    else
        std::cout << -(n+1)/2;
}
