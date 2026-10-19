#include<iostream>
using namespace std;
 
int main()
{
    string p;bool ans=false;
    cin>>p;
    for(int i=0;i<p.size();i++){
        if(p[i]=='H'||p[i]=='Q'||p[i]=='9'){
            ans=true;break;
        }
    }
    cout<<(ans?"YES":"NO");
    return 0;
}