#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << '0';
    cout << "\n";
    for (int i = 1; i < pow(2, n); i++)
    {
        int gray = i ^ (i >> 1);
        string s;
        while (gray)
        {
            if (gray & 1)
                s += '1';
            else
                s += '0';
            gray >>= 1;
        }
        for (int i = 0; i < n - s.size(); i++)
        {
            cout << '0';
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }

    return 0;
}