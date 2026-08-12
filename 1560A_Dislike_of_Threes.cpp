#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    vector<int> arr;
    arr.push_back(0);
 
    for (int i = 1; arr.size() <= 1005; i++)
    {
 
        if (i % 3 == 0 || i % 10 == 3)
        {
            continue;
        }
        arr.push_back(i);
    }
 
    while (t--)
    {
        int n;
        cin >> n;
 
        cout << arr[n] << "\n";
    }
 
    return 0;
}