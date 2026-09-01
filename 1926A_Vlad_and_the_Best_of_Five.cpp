#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int B=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='B'){B++;}
            
    }
    cout<<((B>s.size()-B)? "B\n":"A\n");
        
}
    return 0;
}