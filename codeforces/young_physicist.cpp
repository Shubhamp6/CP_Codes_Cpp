#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int a[n], b[n], c[n], ansA = 0, ansB = 0, ansC = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        ansA += a[i];
        ansB += b[i];
        ansC += c[i];
    }
    if (ansA == 0 && ansB == 0 && ansC == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}