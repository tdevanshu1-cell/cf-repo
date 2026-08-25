#include <iostream>
using namespace std;
 
void solve() {
    long long x, y, n;
    cin >> x >> y >> n;
    long long ans = ((n - y) / x) * x + y;
    cout << ans << "\n";
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