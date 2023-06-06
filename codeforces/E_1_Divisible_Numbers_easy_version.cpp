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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vector<int> v1, v2;
        set<int> s;
        int flag = 0;
        int x = -1, y = -1;
        for (int i = a + 1; i <= c; i++)
        {
            int h = __gcd(i, a * b);
            int n = (a * b) / h;
            int md = d / n;
            int mb = (b / n) + 1;
            if (mb <= md)
            {
                x = i;
                y = mb * n;
                break;
            }
        }

        cout << x << " " << y << endl;
    }
    return 0;
}