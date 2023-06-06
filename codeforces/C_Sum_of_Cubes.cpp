#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MAX 10001
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    set<int> s;
    int a[MAX];
    for (int i = 1; i < MAX; i++)
    {
        s.insert(pow(i, 3));
        a[i - 1] = pow(i, 3);
    }
    int t;
    cin >> t;
    // unordered_map<int, bool> s;
    // for (int i = 0; i < MAX; i++)
    // {
    //     for (int j = 0; j < MAX; j++)
    //     {
    //         s[a[i] + a[j]] = true;
    //     }
    // }
    while (t--)
    {
        int n;
        cin >> n;
        int flag = 0;
        for (int i = 0; i < MAX; i++)
        {
            if (s.find(n - a[i]) != s.end())
            {
                flag = 1;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}