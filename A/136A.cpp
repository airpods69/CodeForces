#include <iostream>
using namespace std;

int main() {
    int n,x;
    cin >> n;

    int arr[n];
    for (int i=1; i<=n ; i++) {
        std::cin >> x;
        arr[x-1] = i;
    }

    for (int i=0; i<n ; i++) {
        std::cout << arr[i] << " ";
    }
}
