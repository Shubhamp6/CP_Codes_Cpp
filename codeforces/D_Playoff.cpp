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

    int countOnes = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            countOnes++;
    }

    int start, end;
    // if (countOnes == 0)
    //     start = 1;
    // else if (countOnes == 1)
    //     start = 2;
    // else
    start = pow(2, countOnes);

    // if (countOnes == n)
    //     end = (int)pow(2, n);
    // else if (n - countOnes == 1)
    //     end = (int)pow(2, n) - 1;
    // else
    end = (int)pow(2, n) - pow(2, n - countOnes) + 1;

    for (int i = start; i <= end; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}