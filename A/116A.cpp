#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int max=0,m=0,a,b;
    
    for (int i=0; i<n ; i++){
        std::cin >> a >> b;
        m += b-a;
        if (m>max)
            max = m;
    }

    std::cout << max;
}
