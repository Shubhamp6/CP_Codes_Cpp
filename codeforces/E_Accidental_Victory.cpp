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

        vector<int> prefix(n, 0);
        prefix[0] = v[0].first;
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + v[i].first;
        }

        vector<int> player;
        for (int i = 0; i < n - 1; i++)
        {
            if (prefix[i] >= v[i + 1].first)
                player.push_back(v[i].second);
            else
                player.clear();
        }
        player.push_back(v[n - 1].second);

        sort(player.begin(), player.end());
        cout << player.size() << endl;
        for (int i = 0; i < player.size(); i++)
        {
            cout << player[i] << " ";
        }
        cout << endl;
    }
    return 0;
}