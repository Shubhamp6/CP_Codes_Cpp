#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int x, y;
    cin >> x >> y;
    int n;
    cin >> n;
    int a[6] = {x - y, x, y, y - x, -x, -y};
    if (a[n % 6] < 0)
        cout << ((((abs(a[n % 6]) / MOD) + 1) * MOD) + a[n % 6])%MOD << endl;
    else
        cout << a[n % 6]%MOD << endl;
    return 0;
}