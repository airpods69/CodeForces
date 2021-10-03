#include <iostream>
using namespace std;

int main() {
    int count = 1;
    string team_pos;

    cin >> team_pos;

    for (int i = 0 ; i<team_pos.length()-1 ; i++) {
        if (team_pos[i] == team_pos[i+1]) {
            count ++;
            if (count == 7){        
                cout << "YES";
                return 0;
            }    
        }
        else
            count = 1;
    }

    cout << "NO";

    return 0;
}
