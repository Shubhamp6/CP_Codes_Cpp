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
        int index;
        int maxI = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (maxI <= a[i])
            {
                index = i + 1;
                maxI = a[i];
            }
        }
        cout << index << endl;
    }
    return 0;
}