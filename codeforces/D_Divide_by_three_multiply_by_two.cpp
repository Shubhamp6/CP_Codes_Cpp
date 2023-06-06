#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;

    vector<int> v(n, 0);
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }

    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        if (m[v[i] * 3] == 0 && (v[i] % 2 == 1 || m[v[i] / 2] == 0))
        {
            a.push_back(v[i]);
            m[v[i]]--;
            break;
        }
    }

    while (a.size() != n)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] == a[a.size() - 1] * 2 && m[v[i]])
            {
                a.push_back(v[i]);
                m[v[i]]--;
                break;
            }
            else if (v[i] * 3 == a[a.size() - 1] && m[v[i]])
            {
                a.push_back(v[i]);
                m[v[i]]--;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}