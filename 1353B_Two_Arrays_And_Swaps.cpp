#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        long sum = 0;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for (int &c : a)
        {
            cin >> c;
        }
        for (int &c : b)
        {
            cin >> c;
        }
        while (k--)
        {
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            if (b[n - 1] >= a[0])
            {
                a[0] = b[n - 1];
                b[n - 1] = 0;
            }
            else
            {
                break;
            }
        }
        while (n--)
        {
            sum += a[n];
        }
        cout <<sum << "\n";
    }
    return 0;
}