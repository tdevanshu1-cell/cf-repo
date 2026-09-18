#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i;
        cin>>i;
        if(i==2){cout<<"1\n";}
        else{cout<<((i%4==0)?(i/4):((i/4)+1))<<"\n";}
    }
    return 0;
}