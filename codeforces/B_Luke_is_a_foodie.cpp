#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int minEle = a[0], maxEle = a[0];
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            if ((abs(a[i] - minEle) <= x * 2) && (abs(maxEle - a[i]) <= x * 2))
            {
                minEle = min(minEle, a[i]);
                maxEle = max(maxEle, a[i]);
            }
            else
            {
                count++;
                minEle = a[i];
                maxEle = a[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}