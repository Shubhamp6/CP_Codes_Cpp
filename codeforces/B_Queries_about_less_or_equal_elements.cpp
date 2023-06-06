#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> vn, vm;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vn.push_back(a);
    }
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        vm.push_back(a);
    }
    sort(vn.begin(), vn.end());
    for (int i = 0; i < m; i++)
    {
        cout << upper_bound(vn.begin(), vn.end(), vm[i]) - vn.begin() << " ";
    }

    return 0;
}