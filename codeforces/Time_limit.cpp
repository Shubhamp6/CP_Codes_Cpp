#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, s;
    cin >> n >> s;

    int maxTime = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        maxTime = max(maxTime, a);
    }

    int timeLimit = maxTime * s;
    if (timeLimit % 1000)
    {
        timeLimit += 1000 - timeLimit % 1000;
    }
    cout << timeLimit/1000 << endl;

    return 0;
}