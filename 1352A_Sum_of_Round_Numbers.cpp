#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a=0;
        string s;cin>>s;
 
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                a++;
            } } cout << a << "\n"; 
 
           for(int i = 0; i < s.size(); i++){
            if(s[i] != '0'){
                // Added grouping parentheses around (s[i] - '0')
                int value = (s[i] - '0') * round(pow(10, s.size() - 1 - i));
                cout << value << " ";
            }
        }
        cout<<"\n";
 
    }
    return 0;
}