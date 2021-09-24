#include <bits/stdc++.h>
using namespace std;

int check(string s,string s1) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    
    for (int i=0 ; i < s.length() ; i++)
    {
        if (int(s[i]) < int(s1[i])) 
            return -1;

        else if (int(s[i]) > int(s1[i]))
            return 1;
    }

    return 0;

}

int main() {
    string s,s1;
    cin >> s;
    cin >> s1;

    cout << check(s,s1);

    return 0;
}