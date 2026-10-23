#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(m);
    for(int&c:a){cin>>c;}
    int min_ans = 2e9; 
        sort(a.begin(), a.end());
    for(int i = 0; i <= m - n; i++) {
        int mx = a[i + n - 1]; 
        int mn = a[i];       
        
        min_ans = min(min_ans, mx - mn);
    }
    
    cout<<min_ans;
    return 0;
}