#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, mc = 0, cc = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m,c;
        cin >> m >> c;
        if (m > c) {
            mc++; // Mishka wins this round
        } else if (c > m) {
            cc++; // Chris wins this round
        }
    }
    if (mc > cc)
    {
        cout << "Mishka";
    }
    else if (cc > mc)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }
    return 0;
}