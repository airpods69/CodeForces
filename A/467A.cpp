#include <iostream>

bool room_available (int p,int q) {
    if (p <= (q-2))
        return 1;
    return 0;
}

int main() {
    int n, p, q, count=0;

    std::cin >> n;

    for (int i = 0 ; i<n ; i++) {
        std::cin >> p >> q;
        if (room_available(p,q) == 1)
            count++;
    }

    std::cout << count;
}
