#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (!j && !i)
                cout << j;
            else
            cout << j << " ";
        }
        for (int j = i; j > 0; j--)
        {
            if(j == 1)
            cout << 0;
            else
            cout << j - 1 << " ";
        }
        // for (int j = 0; j < n - i; j++)
        // {
        //     cout << " ";
        // }
        cout << "\n";
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            if(!i && !j)
             cout << j;
            else
            cout << j << " ";
        }
        for (int j = i; j > 0; j--)
        {
            if(j == 1)
            cout << 0;
            else
            cout << j - 1 << " ";
        }
        // for (int j = 0; j < n - i; j++)
        // {
        //     cout << " ";
        // }
        cout << "\n";
    }
    return 0;
}