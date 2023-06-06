#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int s, int a, int d, int n)
{
    if (n == 1)
    {
        cout << s << " " << d << "\n";
        return;
    }
    else
    {
        towerOfHanoi(s, d, a, n - 1);
        towerOfHanoi(s, a, d, 1);
        towerOfHanoi(a, s, d, n - 1);
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << "\n";
    towerOfHanoi(1, 2, 3, n);
    return 0;
}