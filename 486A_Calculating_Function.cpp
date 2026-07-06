#include <iostream>
using namespace std;
long long f(long long n){
    if(n%2==0){
        n=n/2;
    }
    else{
        n=-(n+1)/2;
    }
    return n;
}
 
int main()
{
    long long n;
    cin >> n;
    cout << f(n);
    return 0;
}