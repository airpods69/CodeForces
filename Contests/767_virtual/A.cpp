#include <bits/stdc++.h>
using namespace std;

template<typename T>
void pop_front(std::vector<T> &v)
{
    if (v.size() > 0) {
        v.erase(v.begin());
    }
}

bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[0] < v2[0];
}


int total_ram() {
    int n, k, input_vec;

    cin >> n >> k;

    vector<int> ai;

    vector<vector<int>> ram;

    for (int i = 0 ; i < n ; i++) 
        cin >> input_vec;
        ai.push_back(input_vec);

    for (int i = 0 ; i < n ; i++) {
        vector<int> bi;

        cin >> input_vec;
        bi.push_back(ai[i]);
        bi.push_back(input_vec);
        ram.push_back(bi);
    }

    sort(ram.begin(), ram.end(), sortcol);



    for (int i = 0 ; i < n ; i++) {
        if (ram[i][0] <= k) {
            k += ram[i][1];
            pop_front(ram);
        }
        else
            return k;
    }

    return k;
}


int main() {

    int t;
    cin >> t;

    while (t--) 
        cout << total_ram() << endl;
}