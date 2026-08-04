#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int>arr(3);
        int ans=0;
        for(int &c:arr){
        cin>>c;}
        
        while(true){
        if(arr[0]==arr[1]||arr[1]==arr[2]||arr[2]==arr[0]){
        break;}
            sort(arr.begin(),arr.end());
            arr[2]=arr[2]-1;
            arr[0]=arr[0]+1;
            ans++;}
        
        cout<<ans<<"\n";
    }
    return 0;
}