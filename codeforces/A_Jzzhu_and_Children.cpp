#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(make_pair(a, i + 1));
    }
    int i = 0, ind, count = 0,max = v.size();
    while (count != max)
    {
        int a = v[i].first;
        ind = v[i].second;
        if (a - m > 0)
        {
            v.push_back(make_pair(a - m, ind));
        }
        else
        {
            count++;
        }
        i++;
    }
    cout << ind << endl;

    return 0;
}