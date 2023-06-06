#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int ts = 1;
    while (t--)
    {
        int n;
        cin >> n;
        // vector<int> x, y;
        // vector<int> x2, y2;
        int x = 0, y = 0, x2 = 0, y2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x1;
            cin >> x1;
            int y1;
            cin >> y1;
            x += x1;
            y += y1;
            x2 += pow(x1, 2);
            y2 += pow(y1, 2);
            // x.push_back(x1);
            // y.push_back(y1);
            // x2.push_back(pow(x1, 2));
            // y2.push_back(pow(y1, 2));
        }
        int q;
        cin >> q;
        int sum = 0;
        for (int i = 0; i < q; i++)
        {
            int x1, y1;
            cin >> x1 >> y1;
            sum += ((x2 + n * pow(x1,2) - 2 * x1 * x) + (y2 + n * pow(y1, 2) - 2 * y1 * y));
        }
        cout << "Case #" << ts << ": " << sum%MOD << endl;
        ts++;
    }
    return 0;
}