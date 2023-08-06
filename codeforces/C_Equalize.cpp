#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;

    string a, b;
    cin >> a;
    cin >> b;

    int stepCount = 0, i = 0, j = 0;
    while (i < n && a[i] == b[i])
        ++i;
    while (i < n)
    {
        j = i + 1;
        while (j < n && a[j] == b[j])
        {
            ++j;
        }
        if(i < n && j == n)
        {
            ++stepCount;
            break;
        }
        if (j - i >= 2 || a[i] == a[j])
        {
            i = j;
            ++stepCount;
        }
        else
        {
            stepCount += (j - i);
            i = j + 1;
            while (i < n && a[i] == b[i])
            {
                ++i;
            }
        }
    }

    cout << stepCount << "\n";
    return 0;
}