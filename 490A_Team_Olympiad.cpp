#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<int>team(n);
    vector<bool>check(n,false);
    int c1=0,c2=0,c3=0;
    for(int &c:team){
        cin>>c;
        if(c==1){c1+=1;}
        if(c==2){c2+=1;}
        if(c==3){c3+=1;}
    }
    int ans=min({c1,c2,c3});
    cout<<ans<<"\n";
    while(ans--){
        int a,b,c;
          bool found1 = false, found2 = false, found3 = false;
 
    for(int i=0;i<n;i++){
        if(team[i]==1&&check[i]==false&& !found1){a=i+1;check[i]=true;found1 = true;}
        if(team[i]==2&&check[i]==false&& !found2){b=i+1;check[i]=true;found2 = true;}
        if(team[i]==3&&check[i]==false&& !found3){c=i+1;check[i]=true;found3 = true;}
 
    }
cout<<a<<" "<<b<<" "<<c<<"\n";}
   
 
    return 0;
}