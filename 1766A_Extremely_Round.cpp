#include <iostream>
using namespace std;
 
int main() {
   
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int temp = n;
        int digits = 0;
        int first_digit = 0;
        
       
        while (temp > 0) {
            first_digit = temp % 10; 
            digits++;
            temp /= 10;
        }
        
     
        int ans = 9 * (digits - 1) + first_digit;
        
        cout << ans << "\n";
    }
    return 0;
}