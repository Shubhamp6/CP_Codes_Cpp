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
        sort(a, a + n);
        reverse(a, a + n);
        int alice = 0, bob = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
            {
                if (a[i] % 2)
                    bob += a[i];
            }
            else
            {
                if (!(a[i] % 2))
                    alice += a[i];
            }
        }
        if (alice > bob)
            cout << "Alice" << endl;
        else if (bob > alice)
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
    }
    return 0;
}