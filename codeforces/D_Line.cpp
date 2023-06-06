#include <bits/stdc++.h>
using namespace std;
#define int long long

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
        int curVal = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                curVal += i;
            else
                curVal += (n - 1 - i);
        }
        vector<int> v;
        int i = 0, j = n - 1;
        while (i <= (n - 1) / 2 || j > (n - 1) / 2)
        {
            if (s[i] == 'R' && i <= (n - 1) / 2)
            {
                i++;
                continue;
            }
            if (s[j] == 'L' && j > (n - 1) / 2)
            {
                j--;
                continue;
            }
            if (s[i] == 'L' && s[j] == 'R' && i <= (n - 1) / 2 && j > (n - 1) / 2)
            {
                if ((curVal - i + (n - 1 - i)) >= (curVal + j - (n - 1 - j)))
                {
                    v.push_back((curVal - i + (n - 1 - i)));
                    curVal = (curVal - i + (n - 1 - i));
                    i++;
                }
                else
                {
                    v.push_back((curVal + j - (n - 1 - j)));
                    curVal = (curVal + j - (n - 1 - j));
                    j--;
                }
            }
            else if (s[i] == 'L' && i <= (n - 1) / 2)
            {
                v.push_back((curVal - i + (n - 1 - i)));
                curVal = (curVal - i + (n - 1 - i));
                i++;
            }
            else if (s[j] == 'R' && j > (n - 1) / 2)
            {
                v.push_back((curVal + j - (n - 1 - j)));
                curVal = (curVal + j - (n - 1 - j));
                j--;
            }
            else
                break;
        }

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        for (int i = v.size(); i < n; i++)
        {
            cout << v[v.size() - 1] << " ";
        }
        if (v.size() == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << curVal << " ";
            }
        }

        cout << endl;
    }
    return 0;
}