#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int max_groups = 0;
    for (int i = 0; i < n; i++) {
        int depth = 0;
        int curr = i;
        while (curr != -1) {
            depth++;
            if (a[curr] == -1) break;
            curr = a[curr] - 1;
        }
        max_groups = max(max_groups, depth);
    }
 
    cout << max_groups << endl;
    return 0;
}