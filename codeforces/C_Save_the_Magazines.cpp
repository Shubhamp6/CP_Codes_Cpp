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
        string s;
        cin >> s;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        int minE = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1' && i < n - 1)
            {
                vector<int> v1;
                ans += a[i];
                int minSOFar = a[i];
                i++;
                while (s[i] == '1')
                {
                    minSOFar = min(minSOFar, a[i]);
                    ans += a[i];
                    i++;
                }
                minE += minSOFar;
                i--;
            }
            else if (s[i] == '1')
            {
                ans += a[i];
            }
        }

        cout << ans - minE << endl;
    }
    return 0;
}