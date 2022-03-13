#include <bits/stdc++.h>
using namespace std;

bool checkExistence(string s, char c) {
    for (int i = 0 ; i < s.length() ; i++) {
        if (s[i] == c)
            return True;
    }

    return False;
}
bool checkCondition(string s, char c) {
    
    if (!checkExistence)
        return False;
    
    for (int i = 0; i < s.length(); i+=2) {
        string sub = s.substr(i,i+2);

        if (sub.length() == 2) {
            if (sub[0] == c)
                return False;
        }
        else
            return True;
    }
}