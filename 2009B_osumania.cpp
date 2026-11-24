#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char>arr(4);
        vector<int>ans;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=4;j++){
                cin>>arr[j];
                if(arr[j]=='#'){
                    ans.push_back(j);
                }
            }
        }
        reverse(ans.begin(),ans.end());
        for(int c:ans){cout<<c<<" ";}
        cout<<"\n";
 
    }
    return 0;
}