// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL), cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         int a[n], b[m], sum = 0;
//         for (int i = 0; i < n; i++)
//             cin >> a[i];
//         for (int i = 0; i < m; i++)
//             cin >> b[i];
//         sort(a, a + n);
//         sort(b, b + m);
//         int i = 0, j = m - 1;
//         while (a[i] < b[j] && j >= 0 && i < n)
//         {
//             a[i] = b[j];
//             i++;
//             j--;
//         }
//         if (j >= 0)
//             a[i] = b[j];
//         for (int i = 0; i < n; i++)
//             sum += a[i];
//         cout << sum << endl;
//     }
//     return 0;
// }

#include <stdio.h>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n];
        ll suma=0;
 
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            suma+=a[i];
        }
        sort(a,a+n,greater<ll>());
        ll b[m];
        ll sumb=0;
 
        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
            sumb+=b[i];
        }
        sort(b,b+m,greater<ll>());
 
       ll res=0;
       if(n==m)
       {
           res=sumb;
          cout<<res<<endl;
       }
       else if(n>m)
       {
           res+=sumb;
           int k=n-m;
           for(ll i=0;i<k;i++)
           {
               res+=a[i];
           }
           cout<<res<<endl;
       }
       else
       {
            //add max n number from begin
            for(ll i=0;i<n;i++)
            {
                res+=b[i];
            }
            cout<<res<<endl;
       }
    }
    return 0;
}