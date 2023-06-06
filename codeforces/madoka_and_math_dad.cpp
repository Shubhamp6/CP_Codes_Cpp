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
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            v1.push_back((i % 2) + 1);
            v2.push_back((v1[i] % 2) + 1);
            sum1 += v1[i];
            sum2 += v2[i];
            if (sum1 == n || sum2 == n)
                break;
        }
        if (sum1 == sum2)
        {
            if (v1[0] > v2[0])
            {
                for (int i = 0; i < v1.size(); i++)
                {
                    cout << v1[i];
                }
            }
            else
            {
                for (int i = 0; i < v2.size(); i++)
                {
                    cout << v2[i];
                }
            }
            cout << endl;
            continue;
        }
        if (sum1 == n)
        {
            for (int i = 0; i < v1.size(); i++)
            {
                cout << v1[i];
            }
            cout << endl;
            continue;
        }
        if (sum2 == n)
        {
            for (int i = 0; i < v2.size(); i++)
            {
                cout << v2[i];
            }
            cout << endl;
            continue;
        }

    }
    return 0;
}