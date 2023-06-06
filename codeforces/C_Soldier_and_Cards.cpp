#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;

    int k1, k2;
    deque<int> q1, q2;
    cin >> k1;
    for (int i = 0; i < k1; i++)
    {
        int a;
        cin >> a;
        q1.push_back(a);
    }

    cin >> k2;
    for (int i = 0; i < k2; i++)
    {
        int a;
        cin >> a;
        q2.push_back(a);
    }

    int winner = -1, count = 0;
    int start1 = q1.front(), start2 = q2.front();
    map<pair<deque<int>, deque<int>>, int> q;
    while (1)
    {
        int p1 = q1.front(), p2 = q2.front();
        q1.pop_front(), q2.pop_front();
        if (p1 > p2)
        {
            q1.push_back(p2);
            q1.push_back(p1);
            count++;
        }
        else
        {
            q2.push_back(p1);
            q2.push_back(p2);
            count++;
        }
        if (q1.empty())
        {
            winner = 2;
            break;
        }
        if (q2.empty())
        {
            winner = 1;
            break;
        }
        if (q[{q1, q2}])
            break;
        q[{q1, q2}]++;
    }

    if (winner == -1)
        cout << -1 << endl;
    else
    {
        cout << count << " " << winner << endl;
    }

    return 0;
}