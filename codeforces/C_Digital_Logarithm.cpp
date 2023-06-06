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
        vector<string> v1;
        vector<string> v2;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v1.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v2.push_back(s);
        }
        unordered_map<int, int> m;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v1[i].length() == 1)
            {
                int a = v1[i][0] - 48;
                m[a]++;
            }
            else
            {
                count++;
                int a = v1[i].length();
                m[a]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            if (v2[i].length() == 1)
            {
                a = v2[i][0] - 48;
            }
            else
            {
                count++;
                a = v2[i].length();
            }
            if (m.find(a) != m.end())
            {
                m[a]--;
                continue;
            }
            if (m.find(a) != m.end())
            {
                // count++;
                m[a]--;
            }
            else
            {
                m[a]++;
            }
        }
        for (auto i : m)
        {
            if (i.second > 0 && i.first != 1)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}