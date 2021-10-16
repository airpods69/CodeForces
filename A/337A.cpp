#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int f[m];

    for (int i = 0 ; i < m ; i++)
        cin >> f[i];

    sort(f , f+m);

    int count = 100000;

    for (int i = 0 ; i < m - n + 1 ; i++){
        if (f[i+n-1]-f[i] < count)
            count = f[i+n-1]-f[i];
    }    

    cout << count;
    return 0;
}