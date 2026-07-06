#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    int n=0;
    cin>>s>>t;
        if (s.size() != t.size()) {
        cout << "NO\n";
        return 0;
    }
 
    for(int i=0;i<s.size();i++){
        if(s[i]==t[s.size()-(i+1)]){
            n++;
        }
    }
    if(n==s.size()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}