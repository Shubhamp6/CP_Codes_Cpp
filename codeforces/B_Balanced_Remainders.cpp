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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[n];
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i] % 3;
            m[b[i]]++;
        }
        int count = 0;
        while (m[0] != m[1] || m[1]!=m[2] || m[2]!=m[0])
        {
            count++;
            if (m[0] >= m[1] && m[0] >= m[2])
                m[0]--, m[1]++;
            else if (m[1] >= m[2] && m[1] >= m[0])
                m[1]--, m[2]++;
            else if (m[2] >= m[1] && m[2] >= m[0])
                m[2]--, m[0]++;
        }
        cout << count << "\n";
    }
    return 0;
}