#include <bits/stdc++>

int main() {
    int n,len;
    std::cin >> n;

    std::string str1[n];
    for (int i=0; i <n ; i++) 
        std::cin >> str1[i];

    for (int i=0; i <n ; i++) {
        len = str1[i].length();
        if (len >= 10)
            std::cout << str1[i][0] << to_string(len) << str1[i][-1]; 
    }

    return 0;
}
