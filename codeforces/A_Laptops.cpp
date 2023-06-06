#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int n = t;
    vector<pair<int, int>> v;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    int flag = 0;
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        if (v[i].second < v[i - 1].second)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;

    return 0;
}