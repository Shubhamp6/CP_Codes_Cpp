#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    if (m == 1)
        cout << n - 1 << endl;
    else
        cout << n * (m - 1) << endl;
    return 0;
}