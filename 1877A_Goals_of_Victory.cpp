#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        
        vector<int>a(n-1);
        for(int &c:a){cin>>c;sum+=c;}
        cout<<-sum<<"\n";
 
    }
    
    return 0;
}