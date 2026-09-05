#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    int odd_count = 0;
    int even_mod2_count = 0; 
    int even_mod0_count = 0; 
    
    map<int, int> initial_freq;
    int max_initial_freq = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
       
        initial_freq[a[i]]++;
        max_initial_freq = max(max_initial_freq, initial_freq[a[i]]);
        
       
        if (a[i] % 2 != 0) {
            odd_count++;
        } else {
            if (a[i] % 4 == 2) {
                even_mod2_count++;
            } else {
                even_mod0_count++;
            }
        }
    }
 
   
    int ans = max({max_initial_freq, odd_count, even_mod2_count, even_mod0_count});
    cout << ans << "\n";
}
 
int main() {
 
  
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}