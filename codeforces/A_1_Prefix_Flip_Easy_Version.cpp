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
        string a, b;
        cin >> a >> b;
        int count = 0;
        vector<int> v;
        for (int i = n - 1; i > -1; i--)
        {
            if (a[i] == b[i])
                continue;
            else
            {
                count += 3;
                v.push_back(i + 1);
                v.push_back(1);
                v.push_back(i + 1);
            }
        }
        cout << count << " ";
        for (int i = 0; i < count; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}