#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    char shift;
    string input;
    if (!(cin >> shift >> input)) return 0;
    
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int move = (shift == 'R') ? -1 : 1;
    
    for (char c : input) {
        size_t index = keyboard.find(c);
        if (index != string::npos) {
            cout << keyboard[index + move];
        }
    }
    cout << endl;
    
    return 0;
}