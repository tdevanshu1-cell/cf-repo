#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool ans;
        cin >> n;
        string s;
        cin >> s;
        string a = "Timru";
        if (n == 5)
        {
            for (int i = 0; i < n; i++)
            {
                sort(s.begin(), s.end());
                if (s==a)
                {
                    ans = true;
                }
                else
                {
                    ans = false;
                    break;
                }
            }
        }
        else
        {
            ans = false;
        }
        if (ans)
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