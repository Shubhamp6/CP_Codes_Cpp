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
        int teaQ[n], testerC[n];

        for (int i = 0; i < n; i++)
            cin >> teaQ[i];

        for (int i = 0; i < n; i++)
            cin >> testerC[i];

        int prefixSum[n];
        prefixSum[0] = teaQ[0];

        for (int i = 1; i < n; i++)
            prefixSum[i] = teaQ[i] + prefixSum[i - 1];
        }
    return 0;
}