#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (b[i] + b[i - 1] < k)
        {
            b[i] += (k - b[i - 1] - a[i]);
            sum += (k - b[i - 1] - a[i]);
        }
    }
    cout << sum << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << "\n";

    return 0;
}