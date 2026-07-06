#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,a=1,j=0;
   cin>>n;
   vector<int>v(n);
   while(j<n){
    int x;
    cin>>v[j];
    j++;
   }
   for(int i=1;i<n;i++){
    if(v[i]!=v[i-1]){
        a+=1;
    }
 
   }
   cout<<a;
   return 0;
}