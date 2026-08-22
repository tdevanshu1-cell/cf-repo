#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        // Maximum gcd for numbers in [1, n] is n / 2
        cout << n / 2 << '\n';
    }
 
    return 0;
}