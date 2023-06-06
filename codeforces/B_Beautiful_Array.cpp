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
        int n, k, b, s;
        cin >> n >> k >> b >> s;
        if ((s / k) < b || ((b + 1) * k - 1) + ((n - 1) * (k - 1)) < s)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> v;
        if (b == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (s >= k - 1)
                {
                    v.push_back((k - 1));
                    s -= (k - 1);
                }
                else
                {
                    v.push_back(s);
                    s = 0;
                }
            }
        }
        else
        {
            if (s > ((k * b) + (k - 1)))
            {
                v.push_back((k * b) + (k - 1));
                s -= ((k * b) + (k - 1));
            }
            else
            {
                v.push_back((k * b));
                s -= ((k * b));
            }
            for (int i = 1; i < n; i++)
            {
                if (s >= k - 1)
                {
                    v.push_back((k - 1));
                    s -= (k - 1);
                }
                else
                {
                    v.push_back(s);
                    s = 0;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}