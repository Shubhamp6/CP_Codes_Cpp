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
        int n, k;
        cin >> n >> k;
        if (k <= n / 2)
            cout << 2 * k << "\n";
        else
        {
            k -= (n) / 2;
            cout << (2*k -1) << "\n";
        }
    }

    return 0;
}