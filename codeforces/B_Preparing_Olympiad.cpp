#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<int> v(n, 0);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int count = 0;
    for (int i = 1; i <= pow(2, n); i++)
    {
        int j = i;
        int sum = 0;
        int k = 0;
        int minEle = INT_MAX, maxEle = INT_MIN, noPro = 0;
        ;
        while (j)
        {
            if (j % 2)
            {
                sum += v[k];
                maxEle = max(maxEle, v[k]);
                minEle = min(minEle, v[k]);
                noPro++;
            }
            k++;
            j = j >> 1;
        }
       // cout << sum << " " << maxEle - minEle << endl;
        if (sum >= l && sum <= r && maxEle - minEle >= x && noPro > 1)
            count++;
    }

    cout << count << endl;
    return 0;
}