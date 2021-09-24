#include <iostream>
#include <set>
using namespace std;

bool check (int x){
    string s;
    s = to_string(x);

    set<int> uniDigits(s.begin(),s.end());
    if (s.size() == uniDigits.size()) {
        return 1;
    }

    return 0;
}

int main() {
    int n;
    cin >> n;
    n++;
    while (check(n) == 0){
        n++;
    }

    cout << n;

    return 0;
}
