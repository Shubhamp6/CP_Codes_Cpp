#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int num = n;
    int ans = 0, mul = 5;
    while (n)
    {
        ans += (num / mul);
        mul *= 5;
        n /= 5;
    }
    cout << ans << endl;
    return 0;
}