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
        int a, b,a1,b1;
        cin >> a1 >> b1;
        a = max(a1, b1);
        b = min(a1, b1);
        int count = 0;
        if (a % b)
        {
            count = b - (a / (a / b + 1));
            b = (a / (a / b + 1));
        }
        if(b == 1 && a != 1){
           count = 1;
           for(int i = sqrt(a);i >= 1;i--){
            if(a%i == 0)
            {
                count += (i-1) + a/i;
                break;
            }
           }
           cout << count << "\n";
           continue;
        }
        count = (b - 1) + (a / b + 1);
        cout << count << "\n";
    }
    return 0;
}