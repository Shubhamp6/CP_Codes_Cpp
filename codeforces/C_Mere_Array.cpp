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
        int n;
        cin >> n;
        vector<int> v1, v2;
        int minEle = INT_MAX, flag = 1;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v1.push_back(a);
            v2.push_back(a);
            minEle = min(a, minEle);
        }
        // cout << minEle << endl;
        sort(v2.begin(), v2.end());
        for (int i = 0; i < n; i++)
        {
            if (v1[i] != v2[i])
            {
                if (v1[i] % minEle)
                    flag = 0;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}