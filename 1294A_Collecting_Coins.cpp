#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        bool ans=false;
        if((a+b+c+n)%3==0){ans=true;}
        else{ans=false;}
        if(ans && a<=(a+b+c+n)/3&&b<=(a+b+c+n)/3&&c<=(a+b+c+n)/3){ans=true;}
        else{ans=false;}
 
        if(ans){
            cout<<"YES\n";
        }
        else{cout<<"NO\n";}
 
 
    }
    return 0;
}