#include <bits/stdc++.h>
using namespace std;

int maxExpression(int a, int b, int c) {

    int max;
    
    if (a == 1)
        max = (a + b)*c;
    
    else if (b == 1) {
        if ( a > c )
            max = a*(b+c);
        else
            max = (a+b)*c;
    }

    else if (c == 1)
        max = a*(b+c);
    
    else
        max = a*b*c; 
    
    if (max < a + b + c)
        return a + b + c;
    else
        return max;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << (maxExpression(a, b, c));
}