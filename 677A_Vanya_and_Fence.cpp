#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,q=0;
    cin>>n>>h;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        for(int i=0;i<n;i++){
 
            if(a[i]<=h){
            q++;
        }
        else{q=q+2;}}
 
        cout <<q;
    return 0;
}