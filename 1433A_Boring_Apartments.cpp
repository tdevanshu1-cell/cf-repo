#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        if(n<10){ans+=((n%10)-1)*10+1;}
        else if(n<100){ans+=((n%10)-1)*10+1+2;}
        else if(n<1000){ans+=((n%10)-1)*10+1+2+3;}
        else{ans+=((n%10)-1)*10+1+2+3+4;}
        cout<<ans<<"\n"; 
        
 
    }
    return 0;
}