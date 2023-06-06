#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int sum = 0;
    int a[n];
    vector<int> bPrefix, aPrefix;
    bPrefix.push_back(0);
    aPrefix.push_back(0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        bPrefix.push_back(sum);
    }
    sort(a, a + n);
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        aPrefix.push_back(sum);
    }
    int m;
    cin >> m;
    while (m--)
    {
        int l, r, type;
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << bPrefix[r] - bPrefix[l-1] << endl;
        }
        else
        {
            cout << aPrefix[r] - aPrefix[l-1] << endl;
        }
    }

    return 0;
}