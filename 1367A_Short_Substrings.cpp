#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string b;
        cin >> b;
        for (int i = 1; i < b.size(); i++)
        {
            if (b[i] == b[i + 1])
            {
                b.erase(i, 1);
                // i++;
            }
        }
        cout << b << "\n";
    }
    return 0;
}