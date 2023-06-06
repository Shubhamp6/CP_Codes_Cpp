#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int T = 1;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int sum1 = (n * (n + 1)) / 2, sum2 = 0, flag = 0;
        vector<int> v;
        for (int i = 0; i < (1 << n); i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if ((1 << (j - 1)) & i)
                {
                    sum2 += j;
                    v.push_back(j);
                    sum1 -= j;
                }
                if ((sum1 % y == 0 && sum2 % x == 0 && sum1/y == sum2/x))
                {
                    flag = 1;
                    goto abc;
                }
            }
                sum1 = ((n+1)*n)/2,sum2 = 0;
                v.clear();
        }

    abc:
        if (flag)
        {
            cout << "Case #" << T << ": POSSIBLE"
                 << "\n";
            cout << v.size() << "\n";
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "Case #" << T << ": IMPOSSIBLE"
                 << "\n";
        }
        T++;
    }
    return 0;
}