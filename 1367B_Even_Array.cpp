#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,odd=0,even=0;
        cin >> n;
        vector<int> arr(n);
        for (int &c : arr) {
            cin >> c;
        }
        for (int i = 0; i < n; i ++) {
        if(i%2!=0&&arr[i]%2==0){even++;}
        else if(i%2==0&&arr[i]%2!=0){odd++;}
    }
    if(even!=odd){cout<<"-1\n";}
    else{cout<<even<<"\n";}
}
    return 0;
}