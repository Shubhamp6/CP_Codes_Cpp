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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int v1;
            cin >> v1;
            v.push_back(v1);
        }
        int x = -1, y = -1, ind;
        for (int i = v.size() - 1; i > 0; i--)
        {
            if (v[i] <= v[i - 1])
                continue;
            else
            {
                x = i - 1;
                break;
            }
        }
        if (x != -1)
        {
            for (int i = x; i > 0; i--)
            {
                if (v[i] >= v[i - 1])
                    continue;
                else
                {
                    y = i - 1;
                    break;
                }
            }
            if (y != -1)
                ind = y + 1;
            else
                ind = 0;
        }
        else
            ind = 0;
        cout << ind << endl;
    }
    return 0;
}