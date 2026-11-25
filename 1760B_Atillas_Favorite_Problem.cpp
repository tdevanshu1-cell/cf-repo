#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int cur=0,mx=0;
        for(int i=0;i<n;i++){
            cur=a[i];
            mx=max(cur,mx);
        }
        cout<<mx-96<<"\n";
 
    }
    return 0;
}