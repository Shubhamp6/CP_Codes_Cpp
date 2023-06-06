#include <bits/stdc++.h>
using namespace std;
#define int long long
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
        deque<int> p;
        int time = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            time += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            p.push_back(b);
        }

        sort(p.begin(), p.end());
        while (p.size() > 1)
        {
            if (p.front() > p.back())
            {
                time += p.back();
                p.pop_back();
            }
            else
            {
                time += p.front();
                p.pop_front();
            }
        }
        cout << time << endl;
    }
    return 0;
}