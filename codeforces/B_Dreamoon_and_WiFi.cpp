#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '+')
            cnt1++;
        else
            cnt1--;
    }

    int c = 0;
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] == '+')
            cnt2++;
        else if (s2[i] == '-')
            cnt2--;
        else
            c++;
    }

    vector<int> v(pow(2, c), cnt2);
    for (int i = 0; i < pow(2, c); i++)
    {
        int a = cnt2;
        for (int j = 0; j < c; j++)
        {
            if ((i >> j) & 1)
                a++;
            else
                a--;
        }
        v[i] = a;
    }

    int count = 0;
    for (int i = 0; i < pow(2,c); i++)
    {
        if (v[i] == cnt1)
            count += 1;
    }

    double ans = (float)count / (float)pow(2, c);
    if (cnt1 == cnt2 && c == 0)
        ans = 1;
    cout << setprecision(10) << ans << endl;

    return 0;
}