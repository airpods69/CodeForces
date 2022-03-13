#include <bits/stdc++.h>
using namespace std;

int number_of_squares (double n, double m, double a) {
    unsigned long long int rows, boxes;

    rows = ceil(m/a); // Number of rows of boxes
    boxes = ceil(n/a); //Number of boxes in each row

    if (rows * a < m) rows++;
    if (boxes * a < n) boxes++;

    return rows*boxes;
}

int main() {
    unsigned long long int n, m, a;

    cin >> n >> m >> a;

    cout << number_of_squares (n, m ,a) << endl;
}
