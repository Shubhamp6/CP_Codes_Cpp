#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;

    string s;
    cin >> s;

    int plusCount = 0, minusCount = 0;
    map<pair<int, int>, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+')
            plusCount++;
        else
            minusCount++;
    }

    int tempPlusCount = plusCount, tempMinusCount = minusCount;
    while (tempMinusCount && tempPlusCount)
    {
        m[{(tempPlusCount / __gcd(tempPlusCount, tempMinusCount)), tempMinusCount / __gcd(tempPlusCount, tempMinusCount)}]++;
        tempMinusCount--, tempPlusCount--;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (m[{a / __gcd(a, b), b / __gcd(a, b)}] || minusCount == plusCount || m[{b / __gcd(a, b), a / __gcd(a, b)}])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}