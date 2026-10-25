#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m,ans=0;
    cin>>n>>m;
    vector<int>a(n);
    for(int &c:a){cin>>c;}
    sort(a.begin(),a.end());
    for(int i=0;i<m;i++){
        if(a[i]<=0){
            ans+=abs(a[i]);
        }
    }
    cout<<ans;
 
    return 0;
}