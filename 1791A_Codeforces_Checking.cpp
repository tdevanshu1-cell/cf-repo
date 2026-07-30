#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char n;
        cin >> n;
        string s = "codeforces";
        bool ans = false;
        for (char c : s)
        {
            if (c == n)
            {
                ans = true;
                break;
            }
        }
        if (ans == true)
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