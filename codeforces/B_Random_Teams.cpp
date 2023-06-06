#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    cout << (m * ((n / m) * (n / m - 1)) / 2) + (n % m * (n / m)) << " " << ((n - (m - 1)) * (n - (m - 1) - 1)) / 2 << endl;
    return 0;
}