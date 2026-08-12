#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        if(n[0]=='a'||n[1]=='b'||n[2]=='c'){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
    return 0;
}