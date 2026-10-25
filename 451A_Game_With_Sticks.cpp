#include<iostream>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    if(n<k){
        if(n%2==0){
            cout<<"Malvika";
        }
        else{
            cout<<"Akshat";
        }
    }
    else{
        if(k%2==0){
        cout<<"Malvika";
    }
        else{
            cout<<"Akshat";
        }
}
    return 0;
}