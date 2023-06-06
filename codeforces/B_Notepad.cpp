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
        if(n < 4)
        {
            cout << "NO" << endl;
            continue;
        }
        vector<pair<string, int>> m;
        for (int i = 1; i < n; i++)
        {
            string str;
            str = s[i - 1];
            str += s[i];
            m.push_back({str, i});
        }

        sort(m.begin(), m.end());
        int flag = 0;
        string prev = m[0].first;
        int prevNum = m[0].second;
        for (int i = 0; i < m.size(); i++)
        {
            if (prev == m[i].first)
            {
                if (abs(m[i].second - prevNum) > 1)
                {
                    flag = 1;
                    break;
                }
            }else{
                prev = m[i].first;
                prevNum = m[i].second;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}