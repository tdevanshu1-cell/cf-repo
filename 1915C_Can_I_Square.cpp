#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,sum=0;
        cin>>n;
        vector<int>a(n);
        for(int &c:a){cin>>c;sum+=c;}
        long long ans=sqrt(sum);
        cout<<((ans*ans)==sum?"YES\n":"NO\n");
    }
    return 0;
}