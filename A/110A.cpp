#include <iostream>
using namespace std;

int GetNearly(int64_t n) {
    int x,count = 0;

    while (n!=0) {
        x = n%10;
        if ((x==4) || (x==7)){
            count ++;
        }
        n -= x;
        n /=10;
    }

    return count;
}

bool CheckLucky (int x){
    if ((x==4) || (x==7))
        return 1;
    return 0;
}

int main () {
    int64_t num;
    cin >> num;
    int x = GetNearly(num);
    if (CheckLucky(x))
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}
