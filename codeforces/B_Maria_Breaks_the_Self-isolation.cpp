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
        int a[n];
        // map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // m[a[i]]++;
        }
        sort(a, a + n);
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < i + 2)
                count = i + 2;
        }
        cout << count << "\n";
    }
    return 0;
}