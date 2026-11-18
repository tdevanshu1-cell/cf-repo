#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> prime_divisors(n + 1, 0);
    int almost_prime_count = 0;
 
    for (int i = 2; i <= n; ++i) {
        if (prime_divisors[i] == 0) { 
            for (int j = i * 2; j <= n; j += i) {
                prime_divisors[j]++;
            }
        }
        if (prime_divisors[i] == 2) {
            almost_prime_count++;
        }
    }
 
    cout << almost_prime_count << "\n";
    return 0;
}