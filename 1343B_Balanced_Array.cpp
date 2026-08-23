#include <iostream>
using namespace std;
 
int main() {
    // Fast I/O for competitive programming platforms
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        // n/2 must be even, meaning n must be a multiple of 4
        if ((n / 2) % 2 != 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            
            // 1. Output the first n/2 positive even numbers
            for (int i = 1; i <= n / 2; i++) {
                cout << 2 * i << " ";
            }
            
            // 2. Output the first (n/2 - 1) positive odd numbers
            for (int i = 1; i < n / 2; i++) {
                cout << (2 * i - 1) << " ";
            }
            
            // 3. Output the exact math offset to balance the final value
            cout << (n + (n / 2) - 1) << "\n";
        }
    }
    return 0;
}