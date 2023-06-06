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
        int n, m;
        cin >> n >> m;
        int a[n];
        deque<int> q;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            q.push_back(a[i]);
        }
        while (m--)
        {
            int i, k;
            i--;
            for (int i = 0; i < k; i++)
            {
                int a = q.front();
                q.pop_front();
                int b = q.front();
                q.pop_front();

                if (a > b)
                {
                    q.push_back(b);
                    q.push_front(a);
                }
                else
                {
                    q.push_back(a);
                    q.push_back(b);
                }
            }
        }
    }
    return 0;
}