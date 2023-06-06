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
        string s;
        cin >> s;
        int maxI = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxI = max(maxI, s[i] - 'a');
        }

        cout << maxI + 1 << endl;
    }
    return 0;
}