#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,ans=0;
        cin>>a>>b>>c>>d;
        if(d>b){a+=d-b;ans+=d-b;}
        else if(b>d){ans=-1;}
        if(ans!=-1&&a>c){ans+=a-c;}
        else if(c>a){ans=-1;}
        cout<<ans<<"\n";
 
        
    }
    return 0;
}