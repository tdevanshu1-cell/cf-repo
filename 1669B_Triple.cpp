#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        int ans=0;
        cin>>n;
        vector<int>a(n);
        for(int &c:a){cin>>c;}
        sort(a.begin(),a.end());
        for(int i=0;i<n-2;i++){
            if(n<3){break;}
            if(a[i]==a[i+1]&&a[i+1]==a[i+2]){ans=a[i];break;}
            else{ans=0;}
        }
        (ans!=0)?cout<<ans<<"\n":cout<<-1<<"\n";
 
    }
    return 0;
}