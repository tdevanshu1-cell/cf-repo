#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        vector<long long>arr(n);
        for(long long &c:arr){cin>>c;}
        long long sum=b;
        for(int i=0;i<n;i++){
            sum+= min(a - 1, arr[i]);
        }
        cout<<sum<<"\n";
    }
    return 0;
}