#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k; 
        
        vector<int> s(n); 
        for (int &c : s)
        {
            cin >> c;
        }
 
        
        if (k >= 2 || is_sorted(s.begin(), s.end()))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
 
    return 0;
}