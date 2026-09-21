#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b){a+=c;}
        else{
            if(c>=2*(b-a)){
            a+=c;
        }}
        cout<<abs(a-b)<<"\n";
    }
    
    return 0;
}