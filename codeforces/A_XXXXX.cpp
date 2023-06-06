#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int x, int sum, int n, int i)
{
    if ((n - i) < 0)
        return -1;
    if (sum % x)
    {
        return (n - i);
    }
    else
    {
        return max(solve(a, x, sum - a[n - 1], n - 1, i), solve(a, x, sum - a[i], n, i + 1));
    }
}
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
        int sum = 0;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            v1.push_back(sum);
        }
        if (sum % x)
        {
            cout << n << endl;
            continue;
        }
        vector<int> v2(n, 0);
        int sum1 = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            sum1 += a[i];
            v2.push_back(sum1);
        }

        reverse(v2.begin(), v2.end());

        int fInd = -1;
        for (int i = 0; i < n; i++)
        {
            if (v1[i] % x)
            {
                fInd = i;
                break;
            }
        }
        int rInd = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v2[i] % x)
            {
                rInd = i;
                break;
            }
        }

        // int ans = solve(a, x, sum, n, 0);
        if (fInd == -1 && rInd == -1)
            cout << -1 << endl;
        else if (fInd == -1)
            cout << n - (n - rInd) << endl;
        else if (rInd == -1)
            cout << n - 1 - fInd << endl;
        else
            cout << max(n - (n - rInd), n - 1 - fInd) << endl;
    }
    return 0;
}