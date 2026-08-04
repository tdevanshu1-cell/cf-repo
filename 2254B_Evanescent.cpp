#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 1;
 
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                ans++;
            }
        }
        bool minus2 = false, minus1 = false;
 
        for (int i = 1; i < n - 1; i++)
        {
 
            if (s[i - 1] == s[i + 1] && s[i] != s[i - 1])
                minus2 = true;
            else if (s[i - 1] != s[i] && s[i] != s[i + 1])
                minus1 = true;
        }
 
        if (minus2)
            cout << ans - 2 << '\n';
        else if (minus1)
            cout << ans - 1 << '\n';
        else
            cout << ans << '\n';
    }
 
    return 0;
}