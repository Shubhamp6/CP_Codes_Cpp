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
        int n, H, M;
        cin >> n >> H >> M;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int h, m;
            cin >> h;
            cin >> m;
            v.push_back((h * 60) + m);
        }
        sort(v.begin(), v.end());
        int ansT, sleepT = (H * 60) + M, flag = 0,time = 0;
        for (int i = 0; i < n; i++)
        {
            if (sleepT <= v[i] && sleepT > 0)
            {
                ansT = v[i] - sleepT;
                flag = 1;
                break;
            }
            time = v[i];
        }
        if (flag)
        {
            cout << (ansT / 60) << " " << ansT % 60 << endl;
        }
        else
        {
            cout << (v[0] + ((24 * 60) - sleepT)) / 60 << " " << ((v[0] + ((24 * 60) - sleepT))) % 60 << endl;
        }
    }
    return 0;
}