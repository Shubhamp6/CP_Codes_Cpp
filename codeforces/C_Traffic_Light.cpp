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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        // deque<char> q;
        int indexG;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'g')
            {
                indexG = i;
                break;
            }
        }
        indexG++;
        int time[n] = {0};
        int flag = 0;
        for (int i = n - 1; i > -1; i--)
        {
            if (s[i] == 'g')
            {
                indexG = i;
                flag = 1;
            }
            if (flag)
                time[i] = indexG - i;
            else
                time[i] = indexG + (n - 1 - i);
        }
        int maxTime = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
                maxTime = max(maxTime, time[i]);
        }

        cout << maxTime << endl;
        // int i = 0, j = 0;
        // int maxTime = 0;
        // // cout << q[1] << endl;
        // while (i < n)
        // {
        //     while (s[i] != c && i < n)
        //     {
        //         q.push_back(s[i]);
        //         i++;
        //     }
        //     if (i >= n)
        //         break;
        //     j = i;
        //     // cout << q[j]  << j << endl;
        //     while (q[j] != 'g')
        //         j++;
        //     // cout << j << endl;
        //     maxTime = max(j - i, maxTime);
        //     q.push_back(s[i]);
        //     i++;
        // }
    }
    return 0;
}