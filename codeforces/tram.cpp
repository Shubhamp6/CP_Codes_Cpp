#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int pes = 0, ans = INT_MIN;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        pes = pes + b - a;
        ans = max(ans, pes);
    }
    cout << ans << endl;

    return 0;
}