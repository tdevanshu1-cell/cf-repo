#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int j = 0; j < n; j++)
    {
        cin >> v[j];
    }
    for (int i=1; i <= n; i++)
    {
        auto it = std::find(v.begin(), v.end(), i);
        cout << (it - v.begin()) + 1 << " ";
    }
    return 0;
}