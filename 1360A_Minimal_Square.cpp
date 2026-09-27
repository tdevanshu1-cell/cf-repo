#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int m=max(a,b),n=(a+b)-m;
        if((2*n)>m){cout<<(2*n)*(2*n)<<"\n";}
        else{cout<<m*m<<"\n";}
 
    }
    return 0;
}