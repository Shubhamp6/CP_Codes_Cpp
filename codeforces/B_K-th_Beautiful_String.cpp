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
        int n, k;
        cin >> n >> k;
        int m = ceil((1 + sqrt(1 + 8 * k)) / 2);
        int a = k - (((m - 1) * (m - 2)) / 2);
        string s;
        for (int i = 0; i < n; i++)
        {
            if (i == n - m || i == n - a)
            {
                s += 'b';
            }
            else
                s += 'a';
        }
        cout << s << endl;
    }
    return 0;
}