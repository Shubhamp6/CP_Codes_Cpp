#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int q;
    cin >> q;
    set<int> s;
    s.insert(0);
    map<int, int> t;
    char c;
    int n;
    for (int i = 0; i < q; i++)
    {
        cin >> c >> n;
        if (c == '+')
            s.insert(n);
        else
        {

            while (s.find(t[n]) != s.end())
            {
                t[n] += n;
            }
            cout << t[n] << endl;
        }
    }

    return 0;
}