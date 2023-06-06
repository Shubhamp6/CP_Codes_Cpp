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
        int m;
        cin >> m;
        vector<string> v;
        unordered_set<string> s1;
        int minLen = INT_MAX;
        for (int i = 0; i < m; i++)
        {
            string h;
            cin >> h;
            minLen = min(minLen, (int)h.length());
            s1.insert(h);
            v.push_back(h);
        }
        int flag = 0;
        vector<pair<int, int>> p;
        for (int i = 0; i < minLen; i++)
            v[0] += s[i];
        for (int i = minLen; i < s.length(); i++)
        {
            for (int j = minLen; j <= i; j++)
            {
                v[j] += s[i];
            }
            int maxC = INT_MIN;
            for (int j = 0; j < v.size(); j++)
            {
                if (s1.find(v[j]) != s1.end())
                {
                    flag = 1;
                    int size = v[j].length();
                    maxC = max(maxC, size);
                }
            }
            if (!flag)
                break;
        }
    }
    return 0;
}