#include<iostream>
using namespace std;
int main(){
    int n;
    int a=0,b=0;
    cin>>n;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        a-=x;
        a+=y;
        if(a>b){
            b=a;
        }
    }
    cout<<b;
    return 0;
}