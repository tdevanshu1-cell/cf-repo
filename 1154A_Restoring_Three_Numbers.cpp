#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int maxnum = max({a, b, c, d});
    int num1 = maxnum - a;
    if (num1 != 0)
    {
        cout << num1<<" ";
    }
    int num2 = maxnum - b;
    if (num2 != 0)
    {
        cout << num2<<" ";
    }
    int num3 = maxnum - c;
    if (num3 != 0)
    {
        cout << num3<<" ";
    } 
    int num4 = maxnum - d;
    if (num4 != 0)
    {
        cout << num4<<" ";
    }
 
    return 0;
}