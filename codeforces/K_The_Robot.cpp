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

        vector<pair<int, int>> c;
        c.push_back({0, 0});
        int j = 1;
        for (int i = 0; i < s.length(); i++, j++)
        {
            if (s[i] == 'L')
            {
                c.push_back({c[j - 1].first - 1, c[j - 1].second});
            }
            else if (s[i] == 'R')
            {
                c.push_back({c[j - 1].first + 1, c[j - 1].second});
            }
            else if (s[i] == 'U')
            {
                c.push_back({c[j - 1].first, c[j - 1].second + 1});
            }
            else
            {
                c.push_back({c[j - 1].first, c[j - 1].second - 1});
            }
        }

        int pos = -1;
        for (int i = 1; i < c.size(); i++)
        {
            int x = 0, y = 0;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == 'L')
                {
                    if (x - 1 == c[i].first && y == c[i].second)
                        continue;
                    else
                        x -= 1;
                }
                else if (s[j] == 'R')
                {
                    if (x + 1 == c[i].first && y == c[i].second)
                        continue;
                    else
                        x += 1;
                }
                else if (s[j] == 'U')
                {
                    if (x == c[i].first && y + 1 == c[i].second)
                        continue;
                    else
                        y += 1;
                }
                else
                {
                    if (x == c[i].first && y - 1 == c[i].second)
                        continue;
                    else
                        y -= 1;
                }
            }
            // cout << x << " " << y << " " << i << endl;
            if (!x && !y)
                pos = i;
        }
        if (pos == -1)
            cout << 0 << " " << 0 << endl;
        else
            cout << c[pos].first << " " << c[pos].second << endl;
    }
    return 0;
}