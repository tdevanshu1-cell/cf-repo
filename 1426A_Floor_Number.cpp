#include <iostream>
using namespace std;
 
void solve() {
    int n, x;
    cin >> n >> x;
    if (n <= 2) {
        cout << 1 << "\n";
    } else {
        // Integer arithmetic equivalent to ceil((n - 2) / x) + 1
        cout << (n - 3 + x) / x + 1 << "\n";
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