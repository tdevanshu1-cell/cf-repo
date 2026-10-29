#include <iostream>
#include <vector>
#include <numeric>
 
using namespace std;
 
void solve() {
    long long n, k, x;
    cin >> n >> k >> x;
    
    long long minsum = k * (k + 1) / 2;
    
    long long maxsum = k * (2 * n - k + 1) / 2;
    
    if (x >= minsum && x <= maxsum) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}