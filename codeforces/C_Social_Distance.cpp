#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count = 0, ans = 0, j = 0, flag = 0;
        while (j < n)
        {
            if (s[j] == '1')
            {
                if (!flag)
                    ans += (count / (k + 1));
                else
                    ans += ((count - k) / (k + 1));
                flag = 1;
                count = 0;
            }
            else
                count++;
            j++;
        }
        if(!flag)
         ans += (count-1)/(k+1) + 1;
        else
         ans += count/(k+1);
        cout << ans << endl;
    }
    return 0;
}