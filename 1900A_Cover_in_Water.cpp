#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, filled = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                if (s[i - 1] == '.' && s[i + 1] == '.')
                {
                    filled = 2;
                    break;
                }
                else
                {
                    filled++;
                }
            }
        }
        cout << filled << "\n";
    }
    return 0;
}