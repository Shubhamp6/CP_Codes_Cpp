#include <bits/stdc++.h>
using namespace std;

// int isPossible(int a[], int n, int t, int src)
// {

//     if (t == src)
//         return 1;
//     for (int i = 0; i < n; i++)
//     {
//         if ((src + 1) + a[src] == i + 1)
//             return isPossible(a, n, t, i);
//     }
//     return 0;
// }
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int src = 0, flag = 0;
    while (src+1 < t)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == a[src] + src)
                src = i;
            if (src + 1 == t)
                flag = 1;
        }
        if(flag)
        break;
    }

    // if (isPossible(a, n, t - 1, 0))
    //     cout << "YES"
    //          << "\n";
    // else
    //     cout << "NO"
    //          << "\n";

    if (flag)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
    return 0;
}