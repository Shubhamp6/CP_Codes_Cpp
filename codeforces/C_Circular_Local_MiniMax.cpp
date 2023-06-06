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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        int flag = 0;
        for (auto i : m)
        {
            if (i.second > n / 2)
                flag = 1;
        }
        if (n % 2 || flag)
            cout << "NO"
                 << "\n";
        else
        {
            cout << "YES"
                 << "\n";
            sort(a, a + n);
            int j = (n+1)/2, k = 0;
            for (int i = 0; i < n; i++)
            {
                if (i % 2)
                {
                    cout << a[j] << " ";
                    j++;
                }
                else
                {
                    cout << a[k] << " ";
                    k++;
                }
            }
            cout << "\n";
        }
    }
    return 0;
}