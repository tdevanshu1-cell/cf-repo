#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    string best_twogram = "";
    int max_count = -1;
 
 
    for (int i = 0; i < n - 1; ++i) {
        char c1 = s[i];
        char c2 = s[i + 1];
        int current_count = 0;
 
 
        for (int j = 0; j < n - 1; ++j) {
            if (s[j] == c1 && s[j + 1] == c2) {
                current_count++;
            }
        }
        if (current_count > max_count) {
            max_count = current_count;
            best_twogram = ""; 
            best_twogram += c1;
            best_twogram += c2;
        }
    }
 
    cout << best_twogram << "\n";
    return 0;
}