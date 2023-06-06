#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, s;
    cin >> n >> s;

    if (n * 2 > s)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << 1 << " ";
    }
    cout << s - n + 1 << endl;
    cout << s / 2 << endl;

    return 0;
}