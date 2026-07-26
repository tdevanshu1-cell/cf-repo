#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        if (n[0] + n[1] + n[2] == n[3] + n[4] + n[5])
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