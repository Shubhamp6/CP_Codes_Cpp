#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int curSum = 0;
    for (int i = 0; i < m; i++)
        curSum += a[i];
    int sum = curSum;
    int sInd = 0, fInd = m - 1;
    for (int i = m; i < n; i++)
    {
        curSum += a[i] - a[i - m];
        if (curSum < sum)
        {
            sum = curSum;
            sInd = i - m + 1;
            fInd = i;
        }
    }
    cout << sInd + 1;

    return 0;
}