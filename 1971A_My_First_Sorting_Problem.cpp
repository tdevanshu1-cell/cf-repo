#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int>a(2);
        cin>>a[0]>>a[1];
        sort(a.begin(),a.end());
        cout<<a[0]<<" "<<a[1]<<"\n";
    }
    return 0;
}