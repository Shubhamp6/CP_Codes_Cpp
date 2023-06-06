#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, t;
    cin >> n >> t;
    if (pow(10, n) - 1 < t)
    {
        cout << -1 << endl;
        return 0;
    }
    if (t == 10)
    {
        for (int i = 0; i < n - 2; i++)
        {
            cout << 1;
        }
        cout << 10;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << t;
    }

    cout << endl;
    return 0;
}