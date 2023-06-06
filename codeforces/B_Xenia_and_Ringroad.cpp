#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int time = b[0] - 1;
    for (int i = 1; i < m; i++)
    {
        if (b[i - 1] <= b[i])
            time += b[i] - b[i - 1];
        else
            time += n - b[i - 1] + b[i];
    }
    cout << time << "\n";
    return 0;
}