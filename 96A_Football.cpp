#include<iostream>
using namespace std;
 
int main()
{
    int count=1;
    bool ans=false;
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(i>=1&&a[i]==a[i-1]){count++;}
        else{count=1;}
        if(count>=7){ans=true;break;}
 
    }
    cout<<(ans?"YES":"NO");
    return 0;
}