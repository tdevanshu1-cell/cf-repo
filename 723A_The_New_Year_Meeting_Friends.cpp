#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> num(3);
    cin >> num[0] >> num[1] >> num[2];
    sort(num.begin(), num.end());
    int ans = ((num[1] - num[0]) + (num[2] - num[1]));
    cout << ans;
 
    return 0;
}