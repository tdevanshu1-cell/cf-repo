#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        bool flag=true;
        cin>>n;
        if(n==1){cout<<0<<"\n";flag=false;}
        while(n>1&&flag){
            if(n%6==0){
                n/=6;
                ans++;
            }
            else if(n%3==0){
                n/=3;
                ans+=2;
            }
            else{ans=-1;break;}
        }
        if(flag)
        { cout<<ans<<"\n";}
    
}
    return 0;
}