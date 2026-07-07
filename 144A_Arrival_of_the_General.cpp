#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, a = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int max = v[0], min = v[n - 1], maxin = 0, minin = n - 1;
 
    for (int i = 0; i < n; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            maxin = i;
        }
        if (v[i] <= min)
        {
            min = v[i];
            minin = i;
        }
    }
 
    int ans = maxin + (n - 1 - minin);
    if (maxin > minin)
    {
        ans--;
    }
    cout << ans;
 
    return 0;
}