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
        int n, x, m;
        cin >> n >> x >> m;
        x--;
        pair<int, int> p;
        p = make_pair(x, x);
        int flag = 1;
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            if (flag)
            {
                if (a <= p.first && b >= p.first && b - a > 0)
                {
                    // cout << a << " " << b << endl;
                    p.first = a;
                    p.second = b;
                    flag = 0;
                }
            }
            else
            {
                if (a >= p.first && b <= p.second)
                    continue;
                else if (a >= p.first && a <= p.second && b >= p.second)
                    p.second = b;
                else if (b <= p.second && b >= p.first && a <= p.first)
                    p.first = a;
                else if (a < p.first && b > p.second)
                {
                    p.first = a;
                    p.second = b;
                }
            }
        }

        cout << p.second - p.first + 1 << endl;
    }
    return 0;
}
