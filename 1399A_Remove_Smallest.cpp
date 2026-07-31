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
        bool ans = true;
        sort(arr.begin(), arr.end());
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] > 1)
            {
                ans = false;
                break; // Exit the loop immediately
        }}
        cout << (ans == true ? "YES" : "NO") << "\n";
    }
    return 0;
}