#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(3);
        cin>>a[0]>>a[1]>>a[2];
        int mn=*min_element(a.begin(),a.end());
        cout<<n-mn<<"\n";
    }
    
    return 0;
}