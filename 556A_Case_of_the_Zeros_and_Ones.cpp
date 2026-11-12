#include<iostream>
using namespace std;
 
int main()
{
    int n,o=0,z=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){z++;}
        else{o++;}
    }
    cout<<s.size()-(z+o-abs(z-o));
    return 0;
}