#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> heights(n);
        for (int i = 0; i < n; ++i) {
            cin >> heights[i];
        }
 
        sort(heights.begin(), heights.end());
 
        vector<int> left;  
        vector<int> middle;  
        vector<int> right;   
 
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && heights[j] == heights[i]) {
                ++j;
            }
 
            int count = j - i;
            int height = heights[i];
 
            left.push_back(height);
 
            if (count >= 2) {
                right.push_back(height);
            }
 
            for (int k = 2; k < count; ++k) {
                middle.push_back(height);
            }
 
            i = j;
        }
 
        reverse(right.begin(), right.end());
 
        int answer = static_cast<int>(left.size() + right.size());
        cout << answer << '\n';
 
        for (int height : left) {
            cout << height << ' ';
        }
        for (int height : middle) {
            cout << height << ' ';
        }
        for (int height : right) {
            cout << height << ' ';
        }
        cout << '\n';
    }
 
    return 0;
}