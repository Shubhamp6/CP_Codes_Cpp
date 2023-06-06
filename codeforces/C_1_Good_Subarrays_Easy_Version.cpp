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
            cin >> a[i];
        vector<int> v(n, 0);
        v[0] = 1;
        int count = 2;
        int sum = 1;
        for (int i = 1; i < n; i++)
        {
            if (count <= a[i])
            {
                v[i] = count;
                count++;
            }
            else
            {
                count = a[i] + 1;
                v[i] = a[i];
            }
            // }
            // else
            // {
            //     if(count <= a[i])
            //     v[i] = ;
            //     count = a[i] + 1;
            // }
            sum += v[i];
        }
        cout << sum << endl;
    }
    return 0;
}