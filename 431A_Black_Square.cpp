#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int>s(4);
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    string n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n.size();i++){
        ans+=s[n[i]-'1'];
    }
    cout<<ans;
    return 0;
}