#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    char p;
    cin>>n>>t;
    vector<char>v(n);
    for(int k=0;k<n;k++){
        cin>>v[k];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<v.size();j++){
            if(v[j]!=v[n]&&v[j]=='B'&&v[j+1]=='G'){
                p=v[j];
                v[j]=v[j+1];
                v[j+1]=p;
                j++;
            }
 
        }
 
    }
    for(int k=0;k<n;k++){
        cout<<v[k];}
    return 0;
}