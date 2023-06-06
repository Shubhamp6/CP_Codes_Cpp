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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int val = 0;
        int ans = 1;
        for (int i = 1; i < 2 * n; i++)
        {
            if (s[i] == '(' && s[i - 1] == '(')
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}