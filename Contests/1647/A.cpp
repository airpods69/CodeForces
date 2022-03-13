#include <bits/stdc++.h>
using namespace std;

bool checkZero(string num) {
    for (int i = 0 ; i < num.length() ; i++) {
        if(num[i] == '0')
            return 0;
    } 
}

int sumOfDigits (int num) {
    string strNum = to_string(num);
    if (!(checkZero(strNum)))
        return 0;
    int sum = 0;
    for (int i = 0 ; i < strNum.length() ; i++) {
        sum += (int)strNum[i] - 48;
    }
    return sum;
}

int number (int n) {
    int i = 1;
    while( n >= sumOfDigits(i)) {
        i++;
        if (!(sumOfDigits(i)))
            continue;
    }
    return i;
}

int main() {
    cout << number(3);
}