#include <bits/stdc++.h>
using namespace std;
#define int long long
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
        if (k == 0)
        {
            cout << "NO" << endl;
        }
        else if (k % 2)
        {
            cout << "YES" << endl;
            for (int i = 1; i < n; i += 2)
            {
                cout << i << " " << i + 1 << endl;
            }
        }
        else if (n % 2 == 0)
        {
            vector<pair<int, int>> p;

            for (int i = 4; i <= n; i += 4)
            {
                p.push_back({i - 1, i});
            }
            int flag = 1;
            for (int i = 1; i <= n; i += 2)
            {
                if ((i + 1) % 4 == 0)
                    continue;
                else
                {
                    if (((i + k + 1) * i) % 4 == 0)
                    {
                        p.push_back({i + 1, i});
                    }
                    else
                    {
                        flag = 0;
                        cout << "NO" << endl;
                        break;
                    }
                }
            }
            if (flag)
            {
                cout << "YES" << endl;
                for (int i = 0; i < p.size(); i++)
                {
                    cout << p[i].first << " " << p[i].second << endl;
                }
            }
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}