#include<bits/stdc++.h>
using namespace std;
int main()
 
{
    int t;
    cin>>t;
    while(t--){
        int n,odd=0,even=0,equal=0;
        cin>>n;
        vector<int>a(n);for(int &c:a)
        {cin>>c;
        if(c%2==0){even+=1;}
        else{odd+=1;}}
        vector<int>b;
        vector<int>c;
        vector<int> ne = a; 
         sort(ne.begin(),ne.end());
 
        for(int i=0;i<n;i++){
            equal+=a[i];
            if(odd>0&&even>0)
            {if(a[i]%2==0){c.push_back(a[i]);}
            else{b.push_back(a[i]);}}
 
            if(odd>0&&!(even>0)){
                if(a[i]==1){b.push_back(1);}
                else{c.push_back(a[i]);}
            }
 
            if(even>0&&!(odd>0)){
               
                if(a[i]==ne[n-1]){c.push_back(a[i]);}
                else{b.push_back(a[i]);}
            }
 
        }
        if (ne[0] == ne[n-1]){cout<<"-1\n";}
        else{
        cout<<b.size()<<" "<<c.size()<<"\n";
        for(int &k:b)
        {cout<<k<<" ";}
        cout<<"\n";
        for(int &j:c)
        {cout<<j<<" ";}
        cout<<"\n";}
        
 
 
    }
    
  return 0;  
}