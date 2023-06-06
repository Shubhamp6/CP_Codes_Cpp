#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int a = 1;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<string> v;
        int flag = 0, flag1 = 0;
        for (int i = 0; i < r; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (v[i][j] == '^')
                {
                    flag = 1;
                    break;
                }
            }
        }
        for (int i = 0; i < r; i++)
        {
            int f = 1;
            for (int j = 0; j < c; j++)
            {
                if (v[i][j] == '^')
                {
                    if (i > 0)
                    {
                        if (v[i - 1][j] != '#')
                            f = 0;
                    }
                    if (i < r - 1)
                    {
                        if (v[i + 1][j] != '#')
                            f = 0;
                    }
                    if (j > 0)
                    {
                        if (v[i][j - 1] != '#')
                            f = 0;
                    }
                    if (j < c - 1)
                    {
                        if (v[i][j + 1] != '#')
                            f = 0;
                    }
                }
            }
            if (f)
            {
                flag1 = 1;
                break;
            }
        }

        if (flag1 && flag1)
            cout << "Case #" << a << ": Impossible" << endl;
        else if ((r == 1 || c == 1) && flag)
            cout
                << "Case #" << a << ": Impossible" << endl;
        else if (r == 1 || c == 1)
        {
            cout << "Case #" << a << ": Possible" << endl;
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    cout << v[i][j];
                }
                cout << endl;
            }
        }
        else
        {

            cout << "Case #" << a << ": Possible" << endl;

            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if (v[i][j] == '#')
                        cout << "#";
                    else
                        cout << "^";
                }
                cout << endl;
            }
        }
        a++;
    }
    return 0;
}