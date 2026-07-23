#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, a = 0;
    cin >> n;
    vector<int> score(n);
    for (int &c : score)
    {
        cin >> c;
    }
    int min = score[0];
    int max = score[0];
    for (int i = 1; i < n; i++)
    {
        if (score[i] < min)
        {
            min=score[i];
            a++;
        }
        else if (score[i] > max)
        {
            a++;
            max=score[i];
        }
    }
    cout << a;
    return 0;
}