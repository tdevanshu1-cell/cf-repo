#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        reverse(a.begin(),a.end());
        for(char c:a){
            if(c=='p'){cout<<'q';}
            else if(c=='q'){cout<<'p';}
            else{cout<<c;}
        }
        cout<<"\n";
    }
    return 0;
}