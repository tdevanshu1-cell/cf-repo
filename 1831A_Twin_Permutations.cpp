#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int &c:a){cin>>c;}
        int sum=(*max_element(a.begin(),a.end()))+(*min_element(a.begin(),a.end()));
        for(int i=0;i<n;i++){
            cout<<sum-a[i]<<" ";
        }
        cout<<"\n";
 
    }
    return 0;
}