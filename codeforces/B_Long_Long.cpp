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
        int n;
        cin >> n;
        vector<int> v(n, 0);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        int maxSum = 0, op = 0;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] < 0)
            {
                while (v[i] <= 0 && i < n)
                {
                    v[i] *= -1;
                    maxSum += v[i];
                    ++i;
                }
                --i;
                ++op;
            }
            else
                maxSum += v[i];
        }

        cout << maxSum << " " << op << "\n";
    }
    return 0;
}