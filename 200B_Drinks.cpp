#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    double n,a=0;
    cin >> n;
   for(int i=0;i<n;i++){
        double x;
        cin>>x;
        a+=(x/100);
    }
    cout<<fixed<<setprecision(12)<<((a/n)*100);
    return 0;
}