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
        string s;
        cin >> s;
        vector<vector<int>> v(2, vector<int>(2, -1));
        long long count = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            int j = i - 1;
            int p = i & 1;
            if (s[i] != '1')
                j = min(j, max(v[0][p ^ 1], v[1][p]));
            if (s[i] != '0')
                j = min(j, max(v[1][p ^ 1], v[0][p]));

            count += i - j;
            if (s[i] != '?')
                v[s[i] - '0'][p] = i;
        }

        cout << count << "\n";
    }
    return 0;
}