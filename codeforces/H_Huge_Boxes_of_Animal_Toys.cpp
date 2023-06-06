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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vector<int> v(4, 0);
        if ((a + b) % 2)
        {

            if (a || (b && d))
                v[0] = 1;
            if (b || (a && c))
                v[1] = 1;
        }
        else
        {

            if (c || (d && b) || (b && !(b % 2)) || (a && b))
                v[2] = 1;
            if (d || (c && a) || (a && !(a % 2)) || (a && b))
                v[3] = 1;
        }
        for (int i = 0; i < 4; i++)
        {
            if (v[i])
                cout << "Ya ";
            else
                cout << "Tidak ";
        }
        cout << endl;
    }
    return 0;
}

// void solve()
// {
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     if (a > 0 && b > 0 && (a + b) % 2)
//         cout << "Ya Ya ";
//     else if (a > 0 && a % 2)
//         cout << "Ya Tidak ";
//     else if (b > 0 && b % 2)
//         cout << "Tidak Ya ";
//     else
//         cout << "Tidak Tidak ";

//     if (c > 0 && d > 0 && (a + b) % 2)
//         cout << "Ya Ya\n";
//     else if (c > 0 && d % 2)
//         cout << "Ya Tidak\n";
//     else if (d > 0 && c % 2)
//         cout << "Tidak Ya\n";
//     else
//         cout << "Tidak Tidak\n";
// }
// int main()
// {
// //     speed_up;
// // #ifndef ONLINE_JUDGE
// //     freopen("input.txt", "r", stdin);
// //     freopen("output.txt", "w", stdout);
// //     freopen("Error.txt", "w", stderr);
// // #endif
//     int t;
//     cin >> t;
//     int google = 1;
//     while (t--)
//     {
//         // cout<<"Case #"<<google<<": ";
//         solve();
//         // google++;
//     }
//     return 0;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;
//         if (a % 2 == 0 && b == 0 && c == 0 && d % 2 == 1)
//             cout << "Tidak Tidak Tidak Ya\n";
//         else if (a % 2 == 1 && b == 0 && c == 0 && d % 2 == 0)
//             cout << "Ya Tidak Tidak Tidak\n";
//         else if (a == 0 && b % 2 == 0 && c % 2 == 1 && d == 0)
//             cout << "Tidak Tidak Ya Tidak\n";
//         else if (a == 0 && b % 2 == 1 && c % 2 == 0 && d == 0)
//             cout << "Tidak Ya Tidak Tidak\n";
//         else if ((a + b) % 2 == 0)
//             cout << "Tidak Tidak Ya Ya\n";
//         else
//             cout << "Ya Ya Tidak Tidak\n";
//     }
//     return 0;
// }