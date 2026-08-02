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
        if (arr[1] == arr[2])
        {
            cout << arr[0] << "\n";
        }
        else if (arr[2] == arr[0])
        {
            cout << arr[2] << "\n";
        }
        else
        {
            cout << arr[2] << "\n";
        }
    }
    return 0;
}