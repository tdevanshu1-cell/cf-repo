#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n, a, b;
    cin >> n >> a >> b;
 
    vector<int> ans(n + 1, 2);
 
    for (int i = 0; i < a; i++) {
        int apple;
        cin >> apple;
        ans[apple] = 1;
    }
    for (int i = 0; i < b; i++) {
        int apple;
        cin >> apple;
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << "\n";
 
    return 0;
}