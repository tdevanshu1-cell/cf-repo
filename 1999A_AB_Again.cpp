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
        int ans = (n%10) + (n/10);
        cout << ans << "\n";
    }
    return 0;
}