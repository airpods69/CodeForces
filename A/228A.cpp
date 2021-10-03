#include <iostream>

int main() {
    int count = 0, arr[4];

    for (int i=0; i<4 ; i++){
        std::cin >> arr[i];
    } 
    int i,j;

    for (i=0; i<4 ; i++) {
        for (j=0 ; j<4 ; j++){
            if (arr [i] ==  arr[j])
                break;
        }

        if (i == j)
            count ++;
    }

    std::cout << 4-count;

}