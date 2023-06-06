#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int T = 1;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v, v2;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
            v2.push_back(a);
        }

        sort(v2.begin(), v2.end());
        reverse(v2.begin(), v2.end());
        vector<int> v3(n, -1);
        for (int i = 0; i < n; i++)
        {
            int a = v[i] * 2, flag = 1;
            for (int j = 0; j < n; j++)
            {
                if (v[i] == v2[j] && flag)
                {
                    flag = 0;
                    continue;
                }
                if (v2[j] <= a)
                {
                    v3[i] = v2[j];
                    break;
                }
            }
        }

        cout << "Case #" << T << ": ";
        for (int i = 0; i < n; i++)
        {
            cout << v3[i] << " ";
        }
        cout << endl;
        T++;
    }
    return 0;
}