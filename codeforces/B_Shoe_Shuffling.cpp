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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> rep;
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
                count++;
            else
            {
                rep.push_back(count);
                count = 1;
            }
        }
        rep.push_back(count);
        int flag = 0;
        for (int i = 0; i < rep.size(); i++)
        {
            if (rep[i] == 1)
            {
                flag = 1;
            }
        }
        if (flag)
            cout << -1 << "\n";
        else
        {
            int add = 0;
            for (int i = 0; i < rep.size(); i++)
            {
                int j = (i ? add + 1 : 1);
                cout << rep[i] + add << " ";
                add += rep[i];
                int lim = add;
                for (; j < lim; j++)
                {
                    cout << j << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}