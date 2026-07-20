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
        
        for (char &c : n)
        {
            c=tolower(c);
        }
        if (n == "yes")
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