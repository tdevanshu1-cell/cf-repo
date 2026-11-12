#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
       int n;
    cin >> n;
    string s;
    cin >> s;
 
 
    vector<bool> needed(26, false);
 
    for (int i = 0; i < n / 2; i++) {
        char u = min(s[i], s[n - 1 - i]);
        char v = max(s[i], s[n - 1 - i]);
 
 
        for (char c = u + 1; c <= v; c++) {
            needed[c - 'a'] = true;
        }
    }
 
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        if (needed[i]) {
            ans++;
        }
    }
 
    cout << ans << "\n";
}
 
 
    
    return 0;
}