#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
        if (a[i] == 100)
        {
            if (m[50] && m[25])
            {
                m[50]--;
                m[25]--;
            }
            else if (m[25] >= 3)
                m[25] -= 3;
            else
            {
                flag = 0;
                break;
            }
        }
        else if (a[i] == 50)
        {
            if (m[25])
                m[25]--;
            else
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}