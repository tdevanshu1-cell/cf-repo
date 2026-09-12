#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--){
        int n,sum=0,one=0,two=0;
        cin>>n;
        vector<int>a(n);
        for(int &c:a){
            cin>>c;sum+=c;
            if(c==1)
            {one+=1;}
        else{two+=1;}}
            if(!(sum%2==0)){cout<<"NO\n";}
            else{
                if(one<2&&(two%2!=0)){cout<<"NO\n";}
                else{cout<<"YES\n";}}
 
        
    }
    
    return 0;
}