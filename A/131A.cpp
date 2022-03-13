#include <bits/stdc++.h>
using namespace std;

#define pass (void)0

string capsLock (string s) {
    int i = 1;

    if (isupper(s[0])) {
        i = 0;
        while (s[i]) {        
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
        i++;
        }
    }

    else {
        s[0] = toupper(s[0]);
        i = 1;
        while (s[i]) {        
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
        i++;
        }
    }

    return s;
}

bool checkRules (string s) {
    int i = 1;
    while(s[i]) {
        if (!isupper(s[i]))
            return false;
        
        i++;
    }

    return true;
}

int main() {
    string s;
    cin >> s;
    
    (checkRules(s)) ? cout << capsLock(s) : cout << s;
}