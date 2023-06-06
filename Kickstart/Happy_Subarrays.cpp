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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        int sum = 0, totalSum = 0;
        int flag = 0;
        int i = 0, j = 0;
        while (i < n || j < n)
        {
            sum += v[i];
            if (sum < 0)
            {
            }
            else
            {
                sum = 0;
                i = i + 2;
                j = j + 2;
            }
        }

        vector<int> sum1(n,0);

        // for (int i = 0; i < n; i++)
        // {
        //     sum = 0;
        //     if (v[i] > -1)
        //     {
        //         for (int j = i; j < n; j++)
        //         {
        //             sum += v[j];
        //             if (sum < 0)
        //             {
        //                 sum = 0;
        //                 break;
        //             }
        //             totalSum += sum;
        //         }
        //     }
        // }

        cout << "Case #" << T << ": " << totalSum << "\n";
        T++;
    }
    return 0;
}