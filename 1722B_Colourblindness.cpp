#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<char> a(n);
        for (char &c : a)
        {
            cin >> c;
            if (c == 'B')
            {
                c = 'G';
            }
        }
        vector<char> b(n);
        for (char &c : b)
        {
            cin >> c;
            if (c == 'B')
            {
                c = 'G';
            }
        }
        if (a == b)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
 
    return 0;
}