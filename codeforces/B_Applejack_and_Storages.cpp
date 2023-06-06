#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;

    vector<int> v(1e5 + 1, 0);
    int cout2 = 0, cout4 = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        cout2 -= v[a] / 2;
        cout4 -= v[a] / 4;

        v[a]++;
        cout2 += v[a] / 2;
        cout4 += v[a] / 4;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        int k;
        cin >> k;
        cout4 -= v[k] / 4;
        cout2 -= v[k] / 2;
        if (c == '+')
        {
            v[k]++;
        }
        else
            v[k]--;

        cout4 += v[k] / 4;
        cout2 += v[k] / 2;

        if (cout4 >= 1 && cout2 >= 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}