#include <iostream>
using namespace std;

int check(int n){
    int x;
    for (int i=0 ; i<n ; i++){
        cin >> x;
        if (x == 1)
            return 1;
    }

    return 0;
}

int main() {
    int n;
    cin >> n;
    if (check(n) == 1)
        cout << "HARD";
    else
        cout << "EASY";

    return 0;
}
