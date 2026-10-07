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
 
        string a;
        cin >> a;
 
        vector<int> memory;
        vector<bool> printed(n + 1, false);
 
        for (int i = 1; i <= n; i++)
        {
            if (a[i - 1] == '1')
            {
                memory.push_back(i);
            }
            else if (a[i - 1] == '2')
            {
                if (!memory.empty())
                {
                    printed[memory.back()] = true;
                    memory.pop_back();
                }
                else
                {
                    printed[i] = true;
                }
            }
            else
            {
                printed[i] = true;
            }
        }
 
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            if (!printed[i])
            {
                ans.push_back(i);
            }
        }
 
        cout << ans.size() << '\n';
        for (int doc : ans)
        {
            cout << doc << ' ';
        }
        cout << '\n';
    }
 
    return 0;
}