#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>s(4);
    int a=0;
    for(int i=0;i<4;i++){
    cin>>s[i];}
    sort(s.begin(), s.end());
    for(int i=1;i<4;i++){
        if(s[i]==s[i-1]){
            a++;
        }
    }
    cout <<a;
    return 0;
}