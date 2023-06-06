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
        int n, m;
        cin >> n >> m;
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            a.push_back(--k);
        }
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        for (int i = 0; i < m; i++)
        {
            int k;
            cin >> k;
            b.push_back(k);
        }

        int costOfhosting = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > i)
                costOfhosting += b[i];
            else
                costOfhosting += b[a[i]];
        }

        cout << costOfhosting << endl;
    }
    return 0;
}