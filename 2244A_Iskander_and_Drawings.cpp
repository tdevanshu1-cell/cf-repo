#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mx = 0, nor = 0;
        cin >> n;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (c == '#')
            {
                nor++;
                mx = max(mx, nor);
            }
            else
            {
                nor = 0;
            }
        }
 
        if (mx == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << (mx + 1) / 2 << "\n";
        }
    }
 
 
        return 0;
}