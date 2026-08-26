#include <iostream>
using namespace std;
 
int main()
{
    int n, k = 0,j=0,l=0;
    cin >> n;
    int i=1;
        while(k<=n){
        j+=i;
        k+=j;
        i++;
        l++;}
 
    
    cout << l-1;
    return 0;
}