#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,ans=true;;
        cin>>n>>m;
        if(m>n){ans=false;}
        string str1;
        cin>>str1;
        string str2;
        cin>>str2;
        string newstr=str2+"six";
        sort(newstr.begin(),newstr.end());
        sort(str1.begin(),str1.end());
        if(ans==true&&newstr==str1){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
    return 0;
}