#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;

    if ((n + 1) * 2 < m || n > m + 1)
    {
        cout << -1 << endl;
        return 0;
    }
    vector<int> v(m + n, 0);
    int i = 0;
    int flag;
    if (n > m)
        flag = 1;
    else
        flag = 0;
    while (n || m)
    {
        if (m > n + 1 && !flag)
        {
            v[i] = 1;
            v[i + 1] = 1;
            i += 2;
            m -= 2;
            flag = 1;
        }
        else if (m > n && !flag)
        {
            v[i] = 1;
            i++;
            m--;
            flag = 1;
        }
        else if (flag)
        {
            v[i] = 0;
            i++;
            n--;
            flag = 0;
        }
        else
        {
            v[i] = 1;
            i++;
            m--;
            flag = 1;
        }
    }

    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j];
    }

    return 0;
}