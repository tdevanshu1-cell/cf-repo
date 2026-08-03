#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, ans = 0;
        cin >> n >> k;
        vector<int> fuel(n);
        for (int &c : fuel)
        {
            cin >> c;
        }
        int mx = fuel[0];
        for (int i = 1; i < n; i++)
        {
            ans = fuel[i] - fuel[i - 1];
            mx = max(mx, ans);
        }
        ans = 2 * (k - (fuel[n - 1]));
        mx = max(mx, ans);
        cout << mx << "\n";
    }
    return 0;
}