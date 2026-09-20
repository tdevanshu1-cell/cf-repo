#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, check = 1;
    cin >> n;
    vector<int> a(n);
    for (int &c : a)
    {
        cin >> c;
        c = abs(c);
        if (c == 0)
        {
            check = 0;
        }
    }
    sort(a.begin(), a.end());
    if (check)
    {
        cout << abs(a[0]);
    }
    else
    {
        cout << 0;
    }
    return 0;
}