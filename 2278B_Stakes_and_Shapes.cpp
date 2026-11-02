#include <bits/stdc++.h>
using namespace std;
 
int main() { int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        
        int total_rounds = x + y + z;
        char choice;
        
        if (y >= z) {
            choice = 'R';  
        } else if (z >= x) {
            choice = 'S';  
        } else {
            choice = 'P';  
        }
    
        string ans(total_rounds, choice);
        cout << ans << "\n";
    }
    
    return 0;
}