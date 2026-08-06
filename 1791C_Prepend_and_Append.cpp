#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
       string str;
       cin>>str;
        int i = 0, j = n-1;
 
        
        while (i < j && ((str[i] == '1' && str[j] == '0') || (str[i] == '0' && str[j] == '1')))
        {
            i++;
            j--;
        }
 
         cout << (j - i + 1) << "\n";
    }
    return 0;
}