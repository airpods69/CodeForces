#include <iostream> 
using namespace std;

int main() {

    int64_t n,k;

    cin >> n >> k;

    if (k <= (n/2)) 
        cout << 1 + (k-1)*2;
    else{
        if (n%2 == 0)
            cout << 2 + (k-(n/2)-1)*2;
        else 
            cout << 2 + (k-(n/2)-2)*2; 
    }
    return 0;
} 