#include <iostream>
using namespace std;
 
int main()
{
    int yako, wako, num;
    cin >> yako >> wako;
    if (yako >= wako)
    {
        num = (6 - yako) + 1;
    }
    else
    {
        num = (6 - wako) + 1;
    }
    int denom = 6;
    while(num % 3 == 0&&denom%3==0||num % 2 == 0&&denom%2==0){if (num % 3 == 0)
    {
        num /= 3;
        denom /= 3;
    }
    else if (num % 2 == 0)
    {
        num /= 2;
        denom /= 2;
    }
}
    if (num == 0)
    {
        cout << "0/1";
    }
    else
    {
        cout << num << "/" << denom;
    }
    return 0;
}