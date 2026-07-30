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
        vector<int> vec(n);
        for (int &c : vec)
        {
            cin >> c;
        }
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] % 2 != 0)
            {
                a += vec[i];
            }
            else
            {
                b += vec[i];
            }
        }
        if ((a + b) % 2 == 0)
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