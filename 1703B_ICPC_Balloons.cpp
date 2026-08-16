#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        string s;
        vector<bool> check(26, true);
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            int num = s[i] - 'A';
            if (check[num] == true)
            {
                ans += 2;
                check[num] = false;
            }
            else
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}