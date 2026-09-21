#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {   
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        if (is_sorted(s.begin(), s.end()))
        {
            cout << 0 << "\n";
            continue; // FIX: Changed from return; to continue;
        }
        
        if (s[0] == '1')
        {
            int O_count = 0;
            for (char c : s)
            {
                if (c == '0')
                    O_count++;
            }
            cout << O_count << "\n";
            continue; // FIX: Changed from return; to continue;
        }
        
        int first_l = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                first_l = i;
                break;
            }
        }
 
        int total_ls = 0;
        for (char c : s)
        {
            if (c == '1')
                total_ls++;
        }
        int total_Os = n - total_ls;
 
        int ls_in_prefix = 0;
        int Os_in_prefix = 0;
        int min_ops = n;
 
        for (int k = 0; k <= n; k++)
        {
            if (k > 0)
            {
                if (s[k - 1] == '1')
                    ls_in_prefix++;
                else
                    Os_in_prefix++;
            }
            if (k >= first_l || k == n)
            {
                int Os_in_suffix = total_Os - Os_in_prefix;
                int current_ops = ls_in_prefix + Os_in_suffix;
                min_ops = min(min_ops, current_ops);
            }
        }
 
        cout << min_ops << "\n";
    }
 
    return 0;
}