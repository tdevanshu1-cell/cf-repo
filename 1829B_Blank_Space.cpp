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
        vector<int> arr(n);
        for (int &c : arr)
        {
            cin >> c;
        }
        int mx = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                zero += 1;
                mx = max(mx, zero);
            }
            else
            {
                zero = 0;
            }
        }
        cout << mx << "\n";
    }
    return 0;
}