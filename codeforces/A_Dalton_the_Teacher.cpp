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
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            if (a == i + 1)
                ++count;
        }

        if (count == 1)
            cout << count << "\n";
        else if (count % 2)
            cout << 2 + (count - 3) / 2 << "\n";
        else
            cout << count / 2 << "\n";
    }
    return 0;
}