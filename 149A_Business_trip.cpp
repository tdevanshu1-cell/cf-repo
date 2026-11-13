#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k, ans = 0;
    cin >> k;
    vector<int> a(12);
    for (int &c : a) {
        cin >> c;
    }
    
    sort(a.begin(), a.end());
    
    for (int i = 11; i >= 0; i--) {
        if (k <= 0) {
            break;
        }
        k -= a[i];
        ans++;
    }
    
    if (k > 0) {
        cout << -1;
    } else {
        cout << ans;
    }
    
    return 0;
}