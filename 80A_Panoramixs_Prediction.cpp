#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
// Helper function to determine if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
 
int main() {
    int n, m;
    // Read the two prime inputs n and m
    if (!(cin >> n >> m)) {
        return 0;
    }
 
    // Find the next prime number strictly greater than n
    int next_prime = n + 1;
    while (!isPrime(next_prime)) {
        next_prime++;
    }
 
    // If the next consecutive prime equals m, output "YES", otherwise "NO"
    if (next_prime == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}