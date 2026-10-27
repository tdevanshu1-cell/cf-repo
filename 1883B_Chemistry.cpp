#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,ans=0;
        cin>>n>>k;
        string a;
        cin>>a;
        ans=a.size();
        sort(a.begin(),a.end());
        for(int i=0;i<(a.size())-1;i++){
            if(a[i]==a[i+1]){ans-=2;i++;}
           
            
        }
        if(ans <= k + 1){cout<<"YES"<<"\n";}
        else{cout<<"NO"<<"\n";}
        
    }
    return 0;
}