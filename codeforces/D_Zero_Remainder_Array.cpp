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

        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v[i] = a;
        }

        // sort(v.begin(), v.end());

        map<int, int> m;
        int maxFreq = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % k)
            {
                m[k - v[i] % k]++;
                maxFreq = max(maxFreq, m[k - v[i] % k]);
            }
        }

        int ans = 0;
        for (auto i : m)
        {
            if (i.second == maxFreq)
                ans = k * (i.second - 1) + i.first + 1;
        }

        cout << ans << endl;

        // unordered_map<int, int> m;
        // int div = (v[0] / k + 1) * k - v[0];
        // div += k;
        // for (int i = 0; i < n; i++)
        // {
        //     if()
        //     if (div < v[i])
        //     {
        //         while (div < v[i])
        //             div += k;
        //     }
        //     else
        //         div += k;
        //     // if (v[i] % k)
        //     // {

        //     //     // if (m[((v[i] / k + 1) * k) - v[i]])
        //     //     // {
        //     //     //     int l = ((v[i] / k + 1) * k) - v[i] + k;
        //     //     //     while (m[l])
        //     //     //     {
        //     //     //         l += k;
        //     //     //     }
        //     //     //     m[l]++;
        //     //     // }
        //     //     // else
        //     //     //     m[((v[i] / k + 1) * k) - v[i]]++;
        //     // }
        // }

        // if (!m.size())
        // {
        //     cout << 0 << endl;
        //     continue;
        // }
        // int minOperation = INT_MIN;
        // for (auto i : m)
        // {
        //     minOperation = max(minOperation, i.first);
        // }
        // int i = 0;
        // while (!(v[i] % k))
        //     i++;

        // int mul = (v[i] / k + 1) * k;
        // mul += k;
        // for (int j = i; j < n; j++)
        // {
        //     if (v[j] % k)
        //     {
        //         while (mul > v[j])
        //         {
        //             v[j] += k;
        //         }
        //     }
        //     mul += k;
        // }

        // cout << mul + 1 << endl;
    }
    return 0;
}