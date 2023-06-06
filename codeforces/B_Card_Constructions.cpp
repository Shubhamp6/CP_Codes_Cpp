#include <bits/stdc++.h>
using namespace std;
#define int long long
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
        int count = 0;
        while(n>1){
            int h = (sqrt(1+(24*n))-1)/6;
            n -= ((3*pow(h,2))+ h)/2;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}