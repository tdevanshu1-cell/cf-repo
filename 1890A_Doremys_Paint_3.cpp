#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    
    if (mp.size() >= 3) {
        cout << "NO\n";
    } else if (mp.size() == 1) {
        cout << "YES\n";
    } else {
        vector<int> counts;
        for (auto it : mp) {
            counts.push_back(it.second);
        }
        if (abs(counts[0] - counts[1]) <= 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
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