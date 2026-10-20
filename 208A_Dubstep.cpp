#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string a;
    cin>>a;
    vector<bool>b(a.size()+1,true);
    for(int i=0;i<a.size();i++){
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B'){
            i+3;
            b[i]=false;b[i+1]=false;b[i+2]=false;
        }
    }
        for(int i=0;i<a.size();i++){
            if(b[i]==true){
                cout<<a[i];
                if(b[i+1]!=true){
                cout<<" ";}
            }
 
            
        }
        
    
    return 0;
}