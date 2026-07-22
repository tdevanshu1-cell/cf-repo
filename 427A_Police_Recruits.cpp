#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, crime = 0, police = 0;
    cin >> t;
    bool order = true;
    vector<int> n(t);
    for (int &c : n)
    {
        cin >> c;
    }
    for (int i = 0; i < t; i++)
    {
        if (n[i] > 0)
        {
            police += n[i];
        }
        else
        {
            if (police > 0)
            {
                police--;
            }
            else
            {
                crime++;
            }
        }
    }
 
    cout << abs(crime);
 
    return 0;
}