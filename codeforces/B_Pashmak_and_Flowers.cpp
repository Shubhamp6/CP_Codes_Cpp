#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    int maxE = INT_MIN, minE = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxE = max(maxE, a[i]);
        minE = min(minE, a[i]);
    }
    int countMax = 0, countMin = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxE == a[i])
            countMax++;
        if (minE == a[i])
            countMin++;
    }
    cout << maxE - minE << " ";
    if (maxE == minE)
        cout << (n * (n - 1)) / 2 << endl;
    else
        cout << countMax * countMin << endl;

    return 0;
}