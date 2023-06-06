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
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }

    sort(a, a + (n - 1));

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != i + 1)
        {
            cout << i + 1 << endl;
            break;
        }
        if (i == n - 2)
        {
            cout << n << endl;
        }
    }

    return 0;
}