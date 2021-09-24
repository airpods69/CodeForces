//if the last digit of the number is non-zero, she decreases the number by one;
//if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).

#include <iostream>

int main() {
    int n,k;
    std::cin >> n >> k;

    for (int i=0 ; i<k ; i++) {
        if (n%10 == 0)
            n /= 10;
        else
            n -= 1;
    }

    std::cout << n;

    return 0;
}
