#include <iostream>
int main () {
    int n, count=0;
    std::string s,s1;
    std::cin >> n;

    s1=10;

    for (int i = 0; i < n ; i++) {
        std::cin >> s;
        if (s != s1)
            count++;
        s1 = s;
    }

    std::cout << count;
}
