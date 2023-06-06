#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int a[2];
    cin >> a[0] >> a[1];
    int count = 0;
    sort(a, a + 2);
    while (a[0] > 0 && a[1] > 1)
    {
        a[0]++;
        a[1] -= 2;
        count++;
        sort(a, a + 2);
    }
    cout << count << endl;
    return 0;
}