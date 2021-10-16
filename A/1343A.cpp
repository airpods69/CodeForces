#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,m;
    cin >> m;
    for (int i = 0 ; i < m ; i++){
        cin >> n;
        for (int k = 2 ; k <= 29 ; k++) {   
            int x = pow(2,k);   
            if (n%(x-1) == 0)
                cout << i << ' ' << n << endl;   
                cout << n/(x-1) << '\n';
        }
    }
    return 0;
}