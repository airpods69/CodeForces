#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int min;
    (n>m) ? min = m : min = n;

    if(min%2 != 0)
        cout << "Akshat";
    else
        cout << "Malvika";

    return 0;
}