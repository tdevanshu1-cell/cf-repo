#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, ans;
        cin >> n >> k;
        if (n == k)
        {
            cout << "0\n";
        }
        else{
        if (n > k &&((n - k) % 10)!=0 )
        {
            ans = ((n - k) / 10) + 1;
            cout << ans << "\n";
        }
        else if (k > n &&((k-n) % 10)!=0)
        {
            ans = ((k - n) / 10) + 1;
            cout << ans << "\n";
        }
        else{if (n > k &&((n - k) % 10)==0){ans=((n - k) / 10);cout<<ans<<"\n";}
             if (k > n &&((k-n) % 10)==0){ans=((k-n) / 10);cout<<ans<<"\n";}}
    }
    }
    return 0;
}