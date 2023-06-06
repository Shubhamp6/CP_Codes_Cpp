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
        int l, r;
        cin >> l >> r;
        int l1 = l;
        int maxDif = INT_MIN, num = -1;
        while (l1 <= r && (l1-l) < 100)
        {
            int n1 = l1;
            int smallestDig = INT_MAX, largestDig = INT_MIN;
            while (n1)
            {
                smallestDig = min(smallestDig, n1 % 10);
                largestDig = max(largestDig, n1 % 10);
                n1 /= 10;
            }
            if (largestDig - smallestDig > maxDif)
            {
                maxDif = largestDig - smallestDig;
                num = l1;
            }
            ++l1;
        }
        // for (int i = l1; i <= r; i += 10)
        // {
        //     // int n1 = i;
        //     // int smallestDig = INT_MAX, largestDig = INT_MIN;
        //     // while (n1)
        //     // {
        //     //     smallestDig = min(smallestDig, n1 % 10);
        //     //     largestDig = max(largestDig, n1 % 10);
        //     //     n1 /= 10;
        //     // }
        //     // // cout << i << " " << largestDig - smallestDig <<"\n";
        //     // if (largestDig - smallestDig > maxDif)
        //     // {
        //     //     maxDif = largestDig - smallestDig;
        //     //     num = i;
        //     // }
        // }
        cout << num << "\n";
    }
    return 0;
}