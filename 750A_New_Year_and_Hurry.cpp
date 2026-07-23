#include <iostream>
using namespace std;
 
int main()
{
    int n, k, solved = 0;
    cin >> n >> k;
    int remaintime = 240 - k;
    int time = 0;
    for (int i = 1; i <= n; i++)
    {
        time += 5 * i;
 
        if (time <= remaintime)
        {
            solved++;
        }
        else
        {
            break;
        }
    }
    cout << solved;
 
    return 0;
}