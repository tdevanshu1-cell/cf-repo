#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,o;
    cin>>i;
    i++;
 
    string s=to_string(i);
 
    while(s[0]==s[1]||s[0]==s[2]||s[0]==s[3]||
        s[1]==s[2]||s[1]==s[3]||
    s[2]==s[3]){
 
        i++;
        s=to_string(i);
 
    }
    cout<<i;
 
return 0;
}