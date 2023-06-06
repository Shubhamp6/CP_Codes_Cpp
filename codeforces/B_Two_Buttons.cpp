#include <bits/stdc++.h>
using namespace std;
int solve(int n, int m)
{
    if (n >= m)
        return (n - m);
    if (n == (m + 1) / 2)
    {
        if (m % 2)
            return solve(n, (m + 1) / 2) + 2;
        return solve(n, m / 2) + 1;
    }
    if (n < (m + 1) / 2)
    {
        if (m % 2)
            return solve(n, (m + 1) / 2) + 2;
        return solve(n, m / 2) + 1;
    }
    return solve(n - 1, m) + 1;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    cout << solve(n, m) << endl;
    return 0;
}