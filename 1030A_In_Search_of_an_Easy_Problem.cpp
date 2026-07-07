#include<iostream>
using namespace std;
int main(){
    int n,a=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x!=0){
            a++;
        }
    }
    if(a!=0){
    cout<<"HARD";
    }
    else{cout<<"EASY";}
    return 0;
}