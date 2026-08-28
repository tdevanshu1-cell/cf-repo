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
        bool ans=false;
        if(arr[0]==1){ans=true;}
            
        
        cout<<(ans?"YES\n":"NO\n");
    }
    return 0;
}