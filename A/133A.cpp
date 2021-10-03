//what the fuck

#include <iostream>
using namespace std;

int search(string s) {
    if ((s.find("H") < 100) || (s.find("Q") < 100) || (s.find("9") < 100))
        return 1;
    return 0;
}

int main() {
    string s;

    cin >> s;
    
    int x = search(s);

    if(x == 1) 
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}