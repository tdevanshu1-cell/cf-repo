#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,ans=1;
        cin>>n;
        vector<int>a(n);
        for(int &c:a){cin>>c;}
        auto min=min_element(a.begin(),a.end());
        int index=distance(a.begin(),min);
        a[index]=a[index]+1;
        for(int c:a){ans*=c;}
        cout<<ans<<"\n";
 
    }
    return 0;
}