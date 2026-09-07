#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        cout<<(60*(24-h-1))+(60-m)<<"\n";
    }
    return 0;
}