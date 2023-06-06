// ~Anant83
#include <bits/stdc++.h>
using namespace std;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
#define ll long long
#define ld long double
#define mod 1000000007
#define pi 3.141592653589793238
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll, ll>
#define sz(x) ((int)(x).size())
#define vpi vector<pair<int, int>>
#define all(x) x.begin(), x.end()
#define allg(x) x.begin(), x.end(), greater<int>()
#define speed_up                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ull unsigned long long
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
//  pbds ps    |||find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x)         \
    cerr << #x << "-> "; \
    _print(x);           \
    cerr << endl;
#define debug2(x, y)             \
    cerr << #x << "   ";         \
    _print(x);                   \
    cerr << "   " << #y << "  "; \
    _print(y);                   \
    cerr << endl;
#define debug3(x, y, z)         \
    cerr << #x << "  ";         \
    _print(x);                  \
    cerr << "  " << #y << "  "; \
    _print(y);                  \
    cerr << "  " << #z << "  "; \
    _print(z);                  \
    cerr << endl;
#else
#define debug(x)
#define debug2(x, y)
#define debug3(x, y, z)
#endif

// template <class T>
// void _print(T a)
// {
//     cerr << a;
// }
// template <class T>
// void _print(vector<T> v)
// {
//     cerr << "[ ";
//     for (T i : v)
//     {
//         _print(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// template <class T, class V>
// void _print(pair<T, V> p)
// {
//     cerr << "{";
//     _print(p.F);
//     cerr << ",";
//     _print(p.S);
//     cerr << "}";
// }
// template <class T>
// void _print(set<T> v)
// {
//     cerr << "[ ";
//     for (T i : v)
//     {
//         _print(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// template <class T>
// void _print(multiset<T> v)
// {
//     cerr << "[ ";
//     for (T i : v)
//     {
//         _print(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// template <class T, class V>
// void _print(map<T, V> v)
// {
//     cerr << "[ ";
//     for (auto i : v)
//     {
//         _print(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }

ll pw(ll a, ll b, ll m)
{
    a %= m;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool ans(int i, string &a, string &s, string &fnl, unordered_map<string, int> &dp)
{
    if (sz(s) == sz(fnl))
    {
        //debug(s);
        return (s == fnl);
    }

    if (dp[(char)i+s])
        return dp[(char)i+s];

    string s1, s2;
    s1 += a[i];
    s1 += s;

    s2 += s;
    s2 += a[i];

    //debug3(i, s1, s2)
    dp[(char)i + s1] = ans(i + 1, a, s1, fnl, dp);
    dp[(char)i + s2] = ans(i + 1, a, s2, fnl, dp);
    return (dp[(char)i + s1] || dp[(char)i + s2]);
}
void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    string s;
    unordered_map<string, int> dp;
    bool can = ans(0, a, s, b, dp);
    if (can)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    speed_up;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    ll t = 1;
    cin >> t;
    int google = 1;
    while (t--)
    {
        cout << "Case " << google << ": ";
        solve();
        google++;
    }
    return 0;
}