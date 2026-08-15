#include <iostream>
using namespace std;
 
int main()
{
    // Fast I/O for Codeforces
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        
        if (c % 2 != 0) {
            // Anna gets the extra turn advantage from 'c'
            if (a >= b) {
                cout << "First\n";
            } else {
                cout << "Second\n";
            }
        }
        else { // c % 2 == 0
            // No one gets an advantage from 'c'
            if (a > b) {
                cout << "First\n";
            } else {
                cout << "Second\n";
            }
        }
    }
    return 0;
}