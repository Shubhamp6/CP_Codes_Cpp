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

        vector<int> v(n, 0);
        vector<int> w(k, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < k; i++)
        {
            cin >> w[i];
        }

        sort(v.begin(), v.end());
        sort(w.rbegin(), w.rend());

        int maxHappiness = 0;
        int forwardIndex = 0, backwardIndex = n - k;
        for (int i = 0; i < k; i++)
        {
            maxHappiness += v[backwardIndex + i];
            if (w[i] - 1)
            {
                maxHappiness += v[forwardIndex];
                forwardIndex += w[i] - 1;
            }
            else
                maxHappiness += v[backwardIndex + i];

            // cout << "H" << maxHappiness << endl;
        }

        cout << maxHappiness << endl;
    }
    return 0;
}