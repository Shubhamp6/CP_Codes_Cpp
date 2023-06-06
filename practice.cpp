#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int i = 3;
    int ans = 3;
    while(i <= 1021){
        ans = ans ^ i;
        i++;
    }
    cout << ans << endl;

    return 0;
}