#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int k,n,ans=0;
        bool check;
        cin>>n>>k;
        string farm;
        cin>>farm;
        for(int i=0;i<n;i+=k){
            for(int j=i;j<(i+k);j++){
                if(farm[j]=='0'){check=false;break;}
                else{check=true;}
                
            }
            if(check){ans++;}
        }
        cout<<ans<<"\n";
 
    }
    return 0;
}