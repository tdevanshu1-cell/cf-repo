#include <iostream>
using namespace std;
int notprime(int a)
{
    if(a==7||a==11||a==5||a==3||a==2)
    {
        return false;
    }
    else if (a % 2 == 0 || a % 3 == 0 || a % 5 == 0||a%7==0||a%11==0)
    {
        return true;
    }
    else{
        return false;
    }
}
 
int main()
{
    int n;
    cin >> n;
    int a = n / 2, b = n - a;
    while (!(notprime(a) && notprime(b)))
    {
        a += 1;
        b -= 1;
    }
    cout << a << " " << b;
    return 0;
}