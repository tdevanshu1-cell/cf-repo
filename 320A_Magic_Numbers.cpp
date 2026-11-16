#include<iostream>
using namespace std;
 
int main()
{
    string s,ans="YES";
    cin>>s;
    
        while(!s.empty()){
        if(s.substr(0, 3)=="144"){s.erase(0,3);}
        else if(s.substr(0, 2)=="14"){s.erase(0,2);}
        else if(s[0]=='1'){s.erase(0,1);}
        else{ans="NO";break;
    }
    }
    cout<<ans;
    return 0;
}