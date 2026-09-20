#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c1=0,c2=0,ans;
        cin>>n;
        vector<int>a(n);
        for(int &c:a){
            cin>>c;
            if(c==2){c2++;}
        }
        if(c2==0){cout<<1<<"\n";}
        else if(c2%2==0){
            for(int i=0;i<n;i++){
                if(a[i]==2){c1++;}
                if(c1==c2/2){ans=i+1;break;}    
            }
            cout<<ans<<"\n";
        }
        else{cout<<"-1\n";}
    }
    return 0;
}