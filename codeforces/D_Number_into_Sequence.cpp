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
        int n;
        cin >> n;
        vector<int> v;
        int n1 = n;
        while (n != 1)
        {
            int factor = -1;
            for (int i = 2; i * i <= n; i++)
            {
                if ((n % i) == 0)
                {
                    factor = i;
                    break;
                }
            }
            if (factor == -1)
            {
                v.push_back(n);
                break;
            }
            n /= factor;
            v.push_back(factor);
        }

        int count = 1, ele = v[0], maxCount = 1;
        for (int i = 1; i < v.size(); i++)
        {
            if (count > maxCount)
            {
                maxCount = count;
                ele = v[i - 1];
            }
            if (v[i] == v[i - 1])
                count++;
            else
                count = 1;
        }
        if (count > maxCount)
        {
            maxCount = count;
            ele = v[v.size() - 1];
        }

        int lastE = ele;
        for (int i = 0; i < v.size(); i++)
        {
            if (ele != v[i])
                lastE *= v[i];
        }

        cout << maxCount << endl;
        for (int i = 1; i < maxCount; i++)
        {
            cout << ele << " ";
        }
        cout << lastE << endl;
    }
    return 0;
}