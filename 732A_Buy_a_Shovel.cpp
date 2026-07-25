#include <iostream>
using namespace std;
 
int main()
{
    int k, r, shov = 0;
    cin >> k >> r;
    for (int i = 1; i < 11; i++)
    {
        if ((k * i) % 10 == 0 || (k * i) % 10 == r)
        {
            shov = i;
            break;
        }
    }
    cout << shov;
 
    return 0;
}