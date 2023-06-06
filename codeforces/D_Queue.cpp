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
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int count = 0, waitT = 0;
    for (int i = 0; i < n; i++)
    {
        if (waitT <= a[i])
        {
            count++;
            waitT += a[i];
        }
    }

    cout << count << endl;
    return 0;
}