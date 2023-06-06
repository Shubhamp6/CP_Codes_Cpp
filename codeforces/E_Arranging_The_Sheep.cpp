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
        string s;
        cin >> s;

        vector<int> pos;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
                pos.push_back(i);
        }

        if (!pos.size())
        {
            cout << 0 << endl;
            continue;
        }

        long long moveRight[pos.size()], moveLeft[pos.size()];
        moveRight[0] = 0;
        for (int i = 1; i < pos.size(); i++)
            moveRight[i] = moveRight[i - 1] + (pos[i] - pos[i - 1] - 1) * i;

        moveLeft[pos.size() - 1] = 0;
        for (int i = pos.size() - 2; i >= 0; i--)
            moveLeft[i] = moveLeft[i + 1] + (pos[i + 1] - pos[i] - 1) * (pos.size() - i - 1);

        long long minMoves = LONG_LONG_MAX;
        for (int i = 0; i < pos.size(); i++)
            minMoves = min(minMoves, moveRight[i] + moveLeft[i]);

        cout << minMoves << endl;
    }
    return 0;
}