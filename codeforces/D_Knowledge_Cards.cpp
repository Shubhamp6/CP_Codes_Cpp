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
        int n, m, k;
        cin >> n >> m >> k;
        int a[k];
        vector<pair<int, int>> p;
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
            p.push_back({a[i], i + 1});
        }

        sort(p.begin(), p.end());
        reverse(p.begin(),p.end());
        int flag = 1, count = 0;
        int preind;
        for (int i = 0; i < k; i++)
        {
            if (i == 0)
            {
                if (n * m - 2 <= p[i].second)
                {
                    flag = 0;
                    break;
                }
                else
                {
                    preind = p[i].second;
                    count++;
                }
            }
            else
            {
                if (preind > p[i].second)
                {
                    count++;
                    continue;
                }
                else
                {
                    if (n * m - 2 + count <= p[i].second)
                    {
                        flag = 0;
                        break;
                    }
                    else
                    {
                        preind = p[i].second;
                        count++;
                    }
                }
            }
        }
        if (flag)
            cout << "YA" << endl;
        else
            cout << "TIDAK" << endl;
    }
    return 0;
}