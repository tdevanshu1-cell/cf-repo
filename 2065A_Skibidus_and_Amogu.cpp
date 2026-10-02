#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        a[a.size()-2]='i';
        a[a.size()-1]=' ';
        cout<<a<<"\n";
    }
    return 0;
}