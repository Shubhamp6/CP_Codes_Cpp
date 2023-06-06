// #include <bits/stdc++.h>
// using namespace std;
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL), cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n, 0);
//         for (int i = 0; i < n; i++)
//         {
//             int a1;
//             cin >> a1;
//             a[i] = a1;
//         }

//         sort(a.begin(), a.end());
//         int maxK = 0;
//         for (int k = 1; k <= n; k++)
//         {
//             int j = 1;
//             vector<int> b = a;
//             while (j <= k)
//             {
//                 // cout << b[0] << endl;
//                 int i = 0;
//                 if ((!(b.empty())) && b[0] <= k - j + 1)
//                 {
//                     while (b[i] <= k - j + 1 && i < n)
//                         i++;
//                 }
//                 else
//                     break;
//                 b.erase((i - 1) + b.begin());
//                 j++;
//                 b[0] += k - j + 1;
//                 sort(b.begin(), b.end());
//             }
//             // cout << j << endl;
//             if (j > k)
//                 maxK = k;
//         }
//         cout << maxK << endl;
//     }
//     return 0;
// }

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
        int n;
        cin >> n;
        if (n == 1)
            cout << "FastestFinger" << endl;
        else if (n % 2)
            cout << "Ashishgup" << endl;
        else if (n == 2)
            cout << "Ashishgup" << endl;
        else
        {
            if ((n / 2) % 2)
            {
                int numberOfOddFact = 0;
                for (int i = 2; i < sqrt(n); i++)
                {
                    if (n % i == 0)
                    {
                        if (i % 2)
                            numberOfOddFact++;
                        if ((n / i) % 2)
                            numberOfOddFact++;
                    }
                }
                if (numberOfOddFact == 1)
                    cout << "FastestFinger" << endl;
                else
                    cout << "Ashishgup" << endl;
            }
            else
            {
                int numberOfOddFact = 0;
                for (int i = 2; i < sqrt(n); i++)
                {
                    if (n % i == 0)
                    {
                        if (i % 2)
                            numberOfOddFact++;
                        if ((n / i) % 2)
                            numberOfOddFact++;
                    }
                }
                if (numberOfOddFact == 0)
                    cout << "FastestFinger" << endl;
                else
                    cout << "Ashishgup" << endl;
            }
        }
    }
    return 0;
}