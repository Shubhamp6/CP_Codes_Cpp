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
        vector<unordered_map<char, int>> v(s.length());
        for (int i = 0; i <= s.length(); i++)
            v[i][s[i]]++;
        int count = 0;
        int q;
        cin >> q;
        while (q--)
        {
            int a, b;
            cin >> a >> b;
            int flag1 = 1, first = 0;
            char c = 'a';
            int mid = (a + b) / 2;
           // cout << 1 << endl;
            for (int i = 0; i < 26; i++)
            {
                if (first && v[mid][i + c] - v[a - 1][i + c] != v[b][c + i] - v[mid][c + i])
                    flag1 = 0;
                if (v[mid][c + i] - v[a - 1][i + c] != v[b][i + c] - v[mid][i + c])
                    first = 1;
            }
            first = 0;
            for (int i = 0; i < 26; i++)
            {
                if (first && v[mid - 1][i + c] - v[a - 1][i + c] != v[b][i + c] - v[mid - 1][i + c])
                    flag1 = 0;
                if (v[mid - 1][i + c] - v[a - 1][i + c] != v[b][i + c] - v[mid - 1][i + c])
                    first = 1;
            }
            if (flag1)
                count++;
        }

        cout << "Case #" << T << ": " << count << endl;
        T++;
    }
    return 0;
}