#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = max(a, b);
    int ans2;
    if (ans == a)
    {
        ans2 = a - b;
        ans = b;
    }
    else
    {
        ans2 = b - a;
        ans = a;
    }
    cout << ans << " " << ans2 / 2;
    return 0;
}