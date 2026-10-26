#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,currentq=1,maxq=0;
        cin>>n>>k;
        vector<int>a(n);
        for(int &c:a){
            cin>>c;
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(i>0&&(a[i]-a[i-1])<=k){
                currentq++;
            }
            else{currentq=1;}
            maxq=max(currentq,maxq);
        }
        cout<<(a.size()-maxq)<<"\n";
 
    }
    return 0;
}