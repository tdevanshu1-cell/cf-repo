#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, k;
        cin >> x >> y >> n;
        if ((n % x) > y)
        {
            cout << (n - (n % x) + y) << "\n";
        }
        else if (n < x)
        {
            cout << y<<"\n";
        }
        else if (y == 0)
        {
            cout << (n - (n % x) + y) << "\n";
        }
        else if ((n % x) < y)
        {
            cout<<((x * ((n / x) - 1)) + y)<<"\n";
        }
        else{cout<<n<<"\n";}
    }
    return 0;
}