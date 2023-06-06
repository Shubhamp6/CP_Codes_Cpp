#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    vector<int> b(4, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i] - 1]++;
    }
    int ans = b[3];
    ans += b[1] / 2;
    b[1] = b[1] % 2;
    int a1 = min(b[0], b[2]);
    b[0] -= a1;
    b[2] -= a1;
    int a2 = (((b[0] + b[1] * 2) + 3) / 4);
    ans += a1 + a2 + b[2];
    cout << ans << endl;
    return 0;
}