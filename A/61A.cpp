#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    string s;
    cin >> a >> b;

    // sum = a+b;
    // s = to_string(sum);

    // for (int i = 0; i<s.length() ; i++) {
    //     if (s[i]=='2') 
    //         s[i] = '0';
    // }

    // cout << s;

    for (int i = 0; i<a.length() ; i++) {
        if (a[i]==b[i])
            s.push_back('0');
        
        else
            s.push_back('1');
    }

    cout << s;
}