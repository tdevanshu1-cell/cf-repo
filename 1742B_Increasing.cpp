#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        bool ans=true;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];          
        }
        sort(arr.begin(),arr.end());
        for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            ans=false;break;}
        }
        cout<<((ans==true)?"YES\n":"NO\n");
 
    }
    return 0;
}