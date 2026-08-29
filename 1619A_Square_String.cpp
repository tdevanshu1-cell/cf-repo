#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool ans=false;
        if((s.size())%2==0){
            for(int i=0;i<s.size()/2;i++){
                if(s[i]==s[s.size()/2+i]){ans=true;}
                else{ans=false;break;}
                
            }
            cout<<(ans?"YES\n" : "NO\n");
        }
        else{cout<<"NO\n";}
            
    }
    return 0;
}