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
        int n, g, b;
        cin >> n >> g >> b;
        int need = (n+1)/2;
        int ans = (need / g) * (g + b);
        if (need % g)
            cout << max(n,ans + ((n + 1) / 2) % g) << "\n";
        else
            cout << max(n,ans - b) << "\n";
    }
    return 0;
}