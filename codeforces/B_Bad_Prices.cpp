#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], minSoFar[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        minSoFar[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
            minSoFar[i] = min(minSoFar[i + 1], a[i]);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (minSoFar[i] < a[i])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}