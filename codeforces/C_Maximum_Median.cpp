#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, k;
    cin >> n >> k;

    vector<int> v(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int mid = n / 2, ans = v[mid];

    for (int i = mid; i < n - 1; i++)
    {
        int dif = v[i + 1] - v[i];
        int len = i - mid + 1;
        int need = dif * len;
        if (need > k)
        {
            ans += k / len;
            k = 0;
        }
        else
        {
            ans += dif;
            k -= need;
        }
        if (!k)
            break;
    }

    if (k)
    {
        ans += k / (n - mid);
    }

    cout << ans << endl;

    return 0;
}