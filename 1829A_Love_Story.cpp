#include <iostream>
using namespace std;
 
int main()
{
    string s = "codeforces";
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != n[i])
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}