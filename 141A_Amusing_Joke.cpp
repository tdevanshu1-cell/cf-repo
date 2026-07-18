#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string sa;
    cin>> sa;
    string ss;
    cin>>ss;
    string s=sa+ss;
    sort(s.begin(), s.end());
    string a;
    cin >> a;
    sort(a.begin(), a.end());
    if (a.size() == s.size())
    {
        if (a==s)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}