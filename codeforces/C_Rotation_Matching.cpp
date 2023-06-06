#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    map<int, int> m1;
    map<int, int> m2;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m1[a] = i;
    }

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m2[a] = i;
    }

    map<int, int> posDiff;
    for (int i = 1; i < n + 1; i++)
    {
        if ((m1[i] - m2[i]) == 1 - n)
        {
            posDiff[1]++;
        }
        else
        {
            posDiff[(m1[i] - m2[i]+n)%n]++;
        }
    }

    int ans = INT_MIN;
    for (auto i : posDiff)
    {
        ans = max(ans, i.second);
    }

    cout << ans << endl;

    return 0;
}