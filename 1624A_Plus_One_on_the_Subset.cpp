#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int &c:arr){cin>>c;}
        int a=*max_element(arr.begin(),arr.end());
        int b=*min_element(arr.begin(),arr.end());
        cout<<a-b<<"\n";
    }
    return 0;
}