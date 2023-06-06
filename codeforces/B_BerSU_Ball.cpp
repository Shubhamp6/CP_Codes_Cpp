#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m;
    cin >> m;
    int b[m];
    for (int j = 0; j < m; j++)
        cin >> b[j];
    int i = 0, j = 0, count = 0;
    sort(a, a + n);
    sort(b, b + m);
    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= 1)
        {
            i++;
            j++;
            count++;
        }
        else if (a[i] < b[j] + 1)
            i++;
        else
            j++;
    }
    cout << count << endl;
    return 0;
}