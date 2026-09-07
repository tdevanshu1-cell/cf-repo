#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        vector<int>arr(n);
        for(int &c:arr){cin>>c;}
        sort(arr.begin(),arr.end());
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[0]){ans+=arr[i]-arr[0];}
        }
        cout<<ans<<"\n";
 
    }
    return 0;
}