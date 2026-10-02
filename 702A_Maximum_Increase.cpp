#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,b=0,ans=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];}
    for(int i=0;i<n;i++){
        cin>>a[i];
    if(i>=1&&a[i]>a[i-1]){ans++;}
    else{ans=0;}
    b=max(ans,b);
}
cout<<b+1<<" ";
    
    return 0;
}