#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int total_points = 0;
    for (int r = 0; r < 10; ++r) {
        string row;
        cin >> row;
        for (int c = 0; c < 10; ++c) {
            if (row[c] == 'X') {
                int points = min({r, 9 - r, c, 9 - c}) + 1;
                total_points += points;
            }
        }
    }
    cout << total_points << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}