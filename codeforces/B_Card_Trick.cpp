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
        int n, m;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> m;
        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        // queue<int> q;
        // for (int i = 0; i < n; i++)
        // {
        //     q.push(a[i]);
        // }

        // for (int i = 0; i < m; i++)
        // {
        //     for (int j = 0; j < b[i]; j++)
        //     {
        //         q.push(q.front());
        //         q.pop();
        //     }
        // }
        // cout << q.front() << "\n";

        int top = 0;
        for (int i = 0; i < m; i++)
        {
            if (top + b[i] < n)
                top += b[i];
            else
            {
                top = (b[i] - ((n - 1) - top)) - 1;
            }
        }
        cout << a[top] << "\n";
    }
    return 0;
}