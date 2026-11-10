#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &c : a) { cin >> c; }
        
        int ans = 0;
        bool possible = true;
        
 
        for (int i = n - 2; i >= 0; i--) {
            while (a[i] >= a[i + 1] && a[i] > 0) {
                a[i] /= 2;
                ans++;
            }
 
            if (a[i] >= a[i + 1]) {
                possible = false;
                break; 
            }
        }
        
        if (possible) {
            cout << ans << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}