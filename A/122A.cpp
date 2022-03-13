#include <bits/stdc++.h>
using namespace std;

#define pass (void)0

bool luckyNumber ( int n ) {
    string nStr = to_string(n);
    int i = 0;
    while (nStr[i]) {
        if ( (nStr[i] == '4') || (nStr[i] == '7') )
            pass;
        else
            return false;
        i++;
    }
    return true;
}

bool almostLuckyNumber ( int n ) {
    int count = 0;
    for (int i = 0 ; i <= n ; i++) {
        if (luckyNumber(i))
            if (n % i == 0)
                count++;
    }
    return (count > 0) ? true : false;
}

int main() {
    int n;
    cin >> n;

    (almostLuckyNumber(n)) ? cout << "YES" : cout << "NO";
}
