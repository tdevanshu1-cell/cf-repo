#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,oper=0;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        while(oper<=6){
            if(x.find(s)!=string::npos){
                cout<<oper<<"\n";
                break;
            }
            else{x+=x;
                oper++;}
            }
            if(oper>6){cout<<"-1\n";}
        
        
    }
    
    return 0;
}