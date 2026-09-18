#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        bool ans=true;
        vector<bool>b(125,true);
        cin>>a;
        for(int i=1;i<n;i++){
            if (n==1)break;
            if(b[(a[i]-'A')]==true&&(a[i-1])!=(a[i])){
               b[(a[i-1]-'A')]=false;
            }
            else if((a[i-1])==(a[i])){continue;}
            else{ans=false;break;}
        }
        cout<<((ans)?"YES\n":"NO\n");
 
    }
    return 0;
}