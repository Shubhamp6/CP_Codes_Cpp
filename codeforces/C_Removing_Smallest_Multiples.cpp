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
        string t;
        cin >> t;
        int sum = 0;
        vector<int> visited(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (t[i] == '0')
            {
                for (int j = i; j < n; j += (i + 1))
                {
                    if (t[j] != '0')
                        break;
                    if (visited[j] == 0)
                        sum += i + 1;
                    visited[j] = 1;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}