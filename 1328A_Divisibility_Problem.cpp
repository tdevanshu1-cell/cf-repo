#include<iostream>
using namespace std;
 
int main()
{
  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    cin >>a>>b;
        if(a%b!=0){
            c=a/b;
            c=(c+1)*b;
            c=c-a;
            cout<<c<<"\n";
 
        }
        else{cout<<"0"<<"\n";}
 
  } 
    return 0;
}