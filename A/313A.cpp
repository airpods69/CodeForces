#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    if (n>=0) {
        cout << n;
        return 0;
    }

    else {
        
        int ans_1, ans_2;

        ans_1 = n/10;

        ans_2 = (n/100)*10+n%10;

        (ans_1>ans_2) ? cout << ans_1 : cout << ans_2;
    }

    return 0;
}