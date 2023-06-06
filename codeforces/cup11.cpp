#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int T = 1;
    while (t--)
    {
        string s;
        cin >> s;
        int t[s.length() + 1][s.length() + 1];
        memset(t, 0, sizeof(t));

        for (int i = 1; i < s.length() - 1; i++)
        {
            unordered_map<char, int> m1, m2;
            int flag1 = 1, flag2 = 1;
            for (int j = 1; j <= i; j++)
            {
                for (int k = i - j; k <= i; k++)
                    m1[s[k]]++;
                for (int k = i + 1; k <= j + i; k++)
                    m2[s[k]]++;
                int first = 0;
                for (int k = i - j; k <= i; k++)
                {
                    if (m1[s[k]] != m2[s[k]] && first)
                        flag1 = 0;
                    if (m1[s[k]] != m2[s[k]])
                        first = 1;
                }
                for (int k = i - j; k < i; k++)
                    m1[s[k]]++;
                for (int k = i; k <= j + i; k++)
                    m2[s[k]]++;
                first = 0;
                for (int k = i - j; k <= i; k++)
                {
                    if (m1[s[k]] != m2[s[k]] && first)
                        flag2 = 0;
                    if (m1[s[k]] != m2[s[k]])
                        first = 1;
                }
                if (flag1 || flag2)
                {
                    t[i - j + 1][i + j + 1] = 1;
                }
            }
            int q, count = 0;
            cin >> q;
            while (q--)
            {
                int i, j;
                cin >> i >> j;
                if (t[i][j])
                    count++;
            }
            cout << "Case #" << T << ": " << count;
            T++;
        }
    }
    return 0;
}