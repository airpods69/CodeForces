#include <iostream>
using namespace std;

int main() {
    int64_t n, k;

    cin >> n >> k;

    if (n%2 == 0) {
        if (k>n/2)
            std::cout << 2 + (k-n/2-1)*2;
        else
            std::cout << 1 + (k-1)*2;
    }
    else {
        if (k>(n+1)/2) 
            std::cout << 2 + (k - (n+1)/2 - 1)*2;
        else
            std::cout << 1 + (k - 1)*2;
    }

    return 0;
}
