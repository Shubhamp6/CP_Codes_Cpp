#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int difM = INT_MAX;
    for (int i = 0; i < (1 << n); i++)
    {
        int sum1 = 0;
        for (int j = 0; j < n; j++)
        {
            if (i >> j & 1)
                sum1 += a[j];
        }
        difM = min(difM, abs(sum - (2 * sum1)));
    }

    cout << difM << "\n";
    return 0;
}