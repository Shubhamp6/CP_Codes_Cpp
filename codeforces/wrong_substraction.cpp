#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    while (k--)
    {
        int r = n % 10;
        if (r == 0)
            n /= 10;
        else
            n -= 1;
    }
    cout << n << endl;
    return 0;
}