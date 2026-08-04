#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(3);
        for (int &c : arr)
        {
            cin >> c;
        }
        sort(arr.begin(), arr.end());
        cout << arr[1] << "\n";
    }
    return 0;
}