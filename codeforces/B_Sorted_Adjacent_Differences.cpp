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
        vector<int> v;
        deque<int> q;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            v.push_back(c);
        }

        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            q.push_back(v[i]);
        }

        v.clear();
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
            {
                int a = q.back();
                v.push_back(a);
                q.pop_back();
            }
            else
            {
                int b = q.front();
                v.push_back(b);
                q.pop_front();
            }
        }

        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }

        cout << endl;
    }
    return 0;
}