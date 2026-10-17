#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,s1=0,s2=0,count=0;
    cin>>n;
    vector<int>a(n);
    for(int&c:a){cin>>c;s1+=c;}
    sort(a.begin(),a.end());
    for(int i=n-1;i>=0;i--){
        s2+=a[i];
        s1-=a[i];count++;
        if(s2>s1){break;}
    }
    cout<<count;
 
    return 0;
}