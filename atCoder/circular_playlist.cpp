#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, time;
    cin >> n >> time;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int prefix[n];
    prefix[0] = 0;

    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + a[i - 1];

    int index = n - 1;
    time = time % (prefix[n - 1] + a[n - 1]);
    cout << time << endl;
    for (int i = 0; i < n - 1; i++)
    {
        if (prefix[i] < time && prefix[i + 1] > time)
        {
            index = i;
            break;
        }
    }

    cout << index + 1 << " " << time - prefix[index] << endl;

    return 0;
}