#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,count=1,ans=1;
    cin>>n;
    vector<int>a(n);
    for(int &c:a){cin>>c;}
    for(int i=0;i<n;i++){
        if((i>0)&&(a[i]>=a[i-1])){
            count++;
            ans=max(count,ans);
        }
        else{count=1;}
    }
    cout<<ans;
    return 0;
}