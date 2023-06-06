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
        int count = 9;
        vector<int> v;
        while (n)
        {
            if ((n - count) >= 0)
            {
                v.push_back(count);
                n -= count;
            }
            else
            {
                v.push_back(n);
                break;
            }
            count--;
        }
        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}