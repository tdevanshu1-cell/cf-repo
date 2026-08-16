#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> team(n);
    for (int &c : team)
    {
        cin >> c;
        if (c <= (5 - k))
        {
            ans++;
        }
    }
    cout << ans / 3;
 
    return 0;
}