#include <iostream>
#include <set>
 
using namespace std;
 
int main() {
    int n, p, q, level;
    cin >> n;
    
    set<int> unique_levels;
    
    // Read Little X's levels
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> level;
        unique_levels.insert(level);
    }
    
    // Read Little Y's levels
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> level;
        unique_levels.insert(level);
    }
    
    // Check if they can clear all n levels
    if (unique_levels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    
    return 0;
}