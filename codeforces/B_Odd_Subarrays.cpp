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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] > a[i])
            {
                count++;
                i++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}