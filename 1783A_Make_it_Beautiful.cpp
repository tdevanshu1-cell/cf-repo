#include <bits/stdc++.h>
using namespace std;
 
main(){
    int t;
    cin>>t;
    while(t--)
    {int n;
    cin >> n;
    vector<int> a(n);
    for (int &d : a) {
        cin >> d;
    }
 
    
    if (a[0] == a[n - 1]) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
 
        cout << a[n - 1] << " ";
 
        for (int i = 0; i < n - 1; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }}
}
 
 
   