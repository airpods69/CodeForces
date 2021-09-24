#include <iostream>

bool width (int h, int x) {
    if (x>h) {
        return 1;
    }

    return 0;

}

int main() {
    int n, h, count = 0 , x;

    std::cin >> n >> h;

    for (int i = 0 ; i<n ; i++) {
        std::cin >> x;
        if (width(h,x) == 1) {
            count += 2;
        }
        else
            count ++;
    }

    std::cout << count;

    return 0;
}
