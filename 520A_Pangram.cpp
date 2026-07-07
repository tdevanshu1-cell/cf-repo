#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,ans=0;
    cin >> n;
    string s;
    cin >> s;
     vector<bool>v(26,false);
    if (n >= 26)
    {
        for (auto c : s)
        
        {c=tolower(c);
            if (c >= 'a' && c <= 'z')
            {int index=c-'a';
                if(v[index]==false){
                
                ans++;
                v[index]=true;
            }}
        }
        if (ans >= 26)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}