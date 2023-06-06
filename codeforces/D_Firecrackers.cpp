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
        int n, k, a, b;
        cin >> n >> k >> a >> b;

        vector<int> v(k, 0);

        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());

        int time;
        int count = 0;
        if (a < b)
        {
            time = (b - a) + (a - 1);
        }
        else
            time = (a - b) + (n - a);
        int pos;
        for (int i = 0; i < k; i++)
        {
            if (v[i] + 1 <= time)
            {
                pos = i;
                break;
            }
        }
        int passed = 1;
        for (int i = pos; i < k; i++)
        {
            if (v[i] + passed <= time)
            {
                count++;
                passed++;
            }
        }
        cout << min(count, abs(a - b) - 1) << endl;
    }
    return 0;
}