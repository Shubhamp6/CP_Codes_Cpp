#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    unordered_map<int, int> m;
    vector<int> ans;
    ++m[v[0]];
    ans.push_back(v[0]);
    for (int i = 1; i < n; ++i)
    {
        int size = ans.size();
        for (int j = 0; j < size; ++j)
        {
            if (!m[ans[j] + v[i]])
            {
                ++m[ans[j] + v[i]];
                ans.push_back(ans[j] + v[i]);
            }
        }
        if (!m[v[i]])
        {
            ++m[v[i]];
            ans.push_back(v[i]);
        }
    }
    cout << m.size() << "\n";
    sort(ans.begin(),ans.end());
    for(int i = 0;i < ans.size();++i)
    cout << ans[i] << " ";
    cout << "\n";
    return 0;
}