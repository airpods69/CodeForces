#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int len=s.length();
    int arr[(s.length()-1)/2];

    for (int i=0; i<len ; i+=2) {
        arr[i/2] = s[i]; 
    }

    for (int i=0; i<len ; i+=2) {
        cout << arr[i/2];
    }

}