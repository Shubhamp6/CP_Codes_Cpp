#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m)
{
    if (n % 3)
        return 0;
    if ((n / 3 == m || 2 * (n / 3) == m))
        return 1;

    return solve(n / 3, m) || solve(2 * (n / 3), m);
}

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

        if (n == m || solve(n, m))
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}