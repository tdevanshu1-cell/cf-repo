#include<iostream>
using namespace std;
int main(){
    int n,p,q;
    int a=0;
    cin>>n;
    while(n--){
        cin>>p>>q;
        if(abs(p-q)>=2){
            a++;
        }
 
    }
    cout<<a;
    return 0;
}