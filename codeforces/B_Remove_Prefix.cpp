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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        unordered_set<int> s;
        int count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            s.insert(a[i]);
            count++;
            if (s.size() != count)
            {
                count--;
                break;
            }
        }
        cout << n - count << endl;
    }
    return 0;
}