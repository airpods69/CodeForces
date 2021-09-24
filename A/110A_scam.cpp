#include <iostream>

int main(){
    std::string s;
    std::cin >> s;
    int count=0;

    for (int i=0; i<s.length() ; i++) {
        if ((s[i]=='4') || (s[i]=='7'))
            count ++;
    }

    if ((count%4==0)||(count%7==0))
        std::cout << "YES";
    else
        std::cout << "NO";
}
