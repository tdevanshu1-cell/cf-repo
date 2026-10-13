#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        if(i>0&&a[i]%2==0&&a[i-1]%2==0){count++;}
    else if(i>0&&a[i]%2!=0&&a[i-1]%2!=0){count++;}
}
cout<<(count)<<"\n";
    }
    return 0;
}