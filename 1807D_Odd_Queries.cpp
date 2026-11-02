#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,q,sum=0;
        cin>>n>>q;
        vector<long long>arr(n);
        for(long long &c:arr){cin>>c;sum+=c;}
        vector<long long>pre(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+arr[i];
        }
        while(q--){
        long long a,b,c,isum=0,fsum=0;
        cin>>a>>b>>c;
            isum+=pre[b]-pre[a-1];
            fsum+=(b - a + 1) * c;
        
        cout<<((abs(sum-isum+fsum))%2==0?"NO\n":"YES\n");}
 
    }
    return 0;
}