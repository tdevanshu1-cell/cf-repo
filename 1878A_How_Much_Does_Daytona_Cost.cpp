#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for(int &c:vec){cin>>c;}
        auto it = find(vec.begin(), vec.end(), k);
        if (it != vec.end())
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