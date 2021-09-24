#include <iostream>

int main(){
    int w,k,n,tot;

    std::cin >> k >> n >> w;

    tot = k*w*(w+1)/2;

    if(tot-n < 0)
        std::cout << 0;
    else
        std::cout << tot-n;
}
