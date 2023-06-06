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
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int count;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (v[0] == a)
                count = i;
        }
        cout << count << endl;
    }
    return 0;
}