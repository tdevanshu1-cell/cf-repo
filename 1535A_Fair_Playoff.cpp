#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int>a(4);
        for(int &c:a){cin>>c;}
        vector<int>b=a;
        sort(b.begin(),b.end());
        if(((a[0]==b[2]||a[1]==b[2])&&(a[2]==b[3]||a[3]==b[3]))||(a[0]==b[3]||a[1]==b[3])&&(a[2]==b[2]||a[3]==b[2])){
            cout<<"YES\n";
        }
        else{cout<<"NO\n";}
 
    }
    return 0;
}