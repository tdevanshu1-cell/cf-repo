#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    if(n>=0){cout<<n;}
    else{
        string str=to_string((n));
        if(str[str.size()-2]>str[str.size()-1]){
            str.erase(str.size()-2,1);
        }
        else{str.erase(str.size()-1,1);}
        if(str=="-0"){cout<<0;}
        else{
        cout<<str;}
    }
    
    return 0;
}