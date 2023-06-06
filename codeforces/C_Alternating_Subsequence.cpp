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
        int i = 0, sum = 0;
        while (i < n)
        {
            int num;
            if (a[i] > 0)
            {
                num = a[i];
                while (a[i] > 0 && i < n)
                {
                    num = max(num, a[i]);
                    i++;
                }
            }
            else
            {
                num = a[i];
                while (a[i] < 0 && i < n)
                {
                    num = max(num, a[i]);
                    i++;
                }
            }
            sum += num;
        }
        cout << sum << endl;
    }
    return 0;
}