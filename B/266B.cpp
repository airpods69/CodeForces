#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,sec;
    cin >> n >> sec;

    char s[n],temp;
    cin >> s;

    for (int sec_count=0 ; sec_count<sec ; sec_count++) {
        for (int i=0; i<n ; i+=1) {
            if (s[i]=='B' && s[i+1]=='G') {
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }

    for(int i=0; i<n ; i++)
        std::cout << s[i];

}
