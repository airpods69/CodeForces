#include <bits/stdc++.h>

using namespace std;

int main() {
    float arr[5];
    int count=0;

    for (int i = 0; i<5 ; i++)
        cin >> arr[i];
    for (int i = 0; i<5 ; i++)
        cout << arr[i];


    for (int i = 0 ; i<4 ; i++){
        count += floor(arr[4]/i);
    }

    for (int i = 0 ; i<4 ; i++){
        for (int j = i+1 ; j<4 ; j++)
            count += floor(arr[4]/(i*j));
    }

    for (int i = 0 ; i<4 ; i++){
        for (int j = i+1 ; j<4 ; j++) {
            for (int k = j+1 ; k<4 ; k++)
                count += floor(arr[4]/i*j*k);
        }
    }

    cout << count;
}
