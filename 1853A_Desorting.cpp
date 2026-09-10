#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m=INT_MAX;
        cin>>n;
        vector<int>a(n);
        for(int &c:a){cin>>c;}
        bool check=true;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){check=false;break;}   
            else{m=min(m,abs(a[i]-a[i+1]));}
        }
        if(check){cout<<(m/2)+1<<"\n";}
        else{cout<<"0\n";}
 
 
    }
    return 0;
}