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
        int end = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (s[i] == s[n - 1])
                end--;
            else
                break;
        }
        int flag = 1, count = 0;
        for (int i = 0; i < end; i++)
        {
            if (flag && s[i] == '1')
            {
                count++;
                flag = 0;
            }
            if (flag == 0 && s[i] == '0')
            {
                count++;
                flag = 1;
            }
        }
        cout << count << endl;
    }

    return 0;
}