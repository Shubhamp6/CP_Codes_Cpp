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
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back({a, i + 1});
        }
        sort(v.begin(), v.end());

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i].first * v[j].first > 2 * n)
                    break;
                if (v[i].first * v[j].first == v[i].second + v[j].second)
                    count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}