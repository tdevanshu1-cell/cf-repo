#include <iostream>
#include <cmath>
 
using namespace std;
 
void solve() {
    long long a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
 
    long long dx[] = {a, a, -a, -a, b, b, -b, -b};
    long long dy[] = {b, -b, b, -b, a, -a, a, -a};
 
    int limit = (a == b) ? 4 : 8;
    int ans = 0;
 
    for (int i = 0; i < limit; i++) {
        long long nx = xk + dx[i];
        long long ny = yk + dy[i];
 
        long long dist_x = abs(nx - xq);
        long long dist_y = abs(ny - yq);
 
        if ((dist_x == a && dist_y == b) || (dist_x == b && dist_y == a)) {
            ans++;
        }
    }
 
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