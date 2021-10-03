#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;

    for (int i=0 ; i<n ; i++){
        if (i%2!=0)
            s.append("I love that ");
        else
            s.append("I hate that ");
    }

    s.erase(s.end()-5,s.end());
    s.append("it");
    cout << s;
}