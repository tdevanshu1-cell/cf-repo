#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> burl(n);
    for (int &c : burl)
    {
        cin >> c;
    }
    int mx = *max_element(burl.begin(), burl.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (burl[i] < mx)
        {
            burl[i] + (mx - burl[i]);
            ans+=(mx - burl[i]);
        }
    }
    cout << ans;
 
    return 0;
}