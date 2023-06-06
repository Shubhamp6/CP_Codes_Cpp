#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int a[n], sum = 0;
    vector<int> prefix;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        prefix.push_back(sum);
    }
    int m;
    cin >> m;
    while (m--)
    {
        int q;
        cin >> q;
        cout << (lower_bound(prefix.begin(), prefix.end(), q) - prefix.begin()) + 1 << endl;
    }
    return 0;
}