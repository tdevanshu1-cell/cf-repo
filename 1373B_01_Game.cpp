#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a;
        int zero=0,one=0,ans=0;
        cin>>a;
        for(int i=0;i<a.size();i++){
            if(a[i]=='0'){zero++;}
            else{one++;}
        }
        while(one>0&&zero>0){
            ans++;
            one--;
            zero--;
        }
        if(ans%2==0){cout<<"NET\n";}
        else{cout<<"DA\n";}
    }
    return 0;
}