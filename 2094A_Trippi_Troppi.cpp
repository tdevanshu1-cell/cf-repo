#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
     cin.ignore();
    while(t--){
        string a,b="";
        getline(cin,a);
        b+=a[0];
        for(int i=1;i<a.size();i++){
            if(a[i-1]==' '){(b+=a[i]);}
        }
        cout<<b<<"\n";
    }
    return 0;
}