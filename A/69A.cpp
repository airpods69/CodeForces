#include <bits/stdc++.h>
using namespace std;

int main() {

    int x = 0, y = 0, z = 0, xi, yi, zi, n;

    cin >> n;

    while (n--) {
        cin >> xi;
        cin >> yi;
        cin >> zi;

        x += xi;
        y += yi;
        z += zi;
    }

    if ( (x==0) && (y==0) && (z==0) ) 
        cout << "YES";
    else
        cout << "NO";
}
