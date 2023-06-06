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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        deque<char> q;
        int i;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '1')
                break;
        }
        for (int j = i + 1; j < i + k; j++)
        {
            if (s[j] == '1')
                q.push_back('0');
            else
                q.push_back('1');
        }
    }
    return 0;
}