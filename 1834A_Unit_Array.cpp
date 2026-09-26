#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c1=0,c2=0;
        cin>>n;
        vector<int>a(n);
        for(int &c:a){
            cin>>c;
            if(c==1){c1++;}
            else{c2++;}}
        int operation=0;
        if(c2>c1){
            int flips=(c2-c1+1)/2;
            operation+=flips;
        c2-=flips;
        c1+=flips;
}
if(c2%2!=0){operation++;}
cout<<operation<<"\n";
 
        
    }
    
    return 0;
}