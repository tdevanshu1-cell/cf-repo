#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        for(int &c : arr){
            cin>>c;
        }
        
        int ans = 0;
        for(int i = 1; i < n; i++){
            if(arr[i] != arr[i-1]){
                // We found a mismatch between arr[i] and arr[i-1]!
                // Let's check which one is the spy using a neighbor.
                if(i == 1) {
                    // Mismatch at the very start. Check against the 3rd element.
                    if(arr[i] == arr[i+1]) ans = 1;     // arr[i-1] is the spy
                    else ans = 2;                       // arr[i] is the spy
                } else {
                    // Mismatch in the middle/end. The spy is definitely arr[i] 
                    // because arr[i-1] already matched the previous element!
                    ans = i + 1;
                }
                break; // Stop immediately once the spy is found
            }
        }
        cout << ans << "\n";
    }
    return 0;
}