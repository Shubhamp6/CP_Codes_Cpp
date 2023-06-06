#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    if (n == 3)
        return 2;
    if (!(n % 4))
        return solve(n - 2) + 1;
    else if (n % 2)
        return solve((n - 1) / 2) + 1;
    else
        return solve(n / 2) + n / 2;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}