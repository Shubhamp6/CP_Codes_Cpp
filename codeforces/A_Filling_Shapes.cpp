#include<bits/stdc++.h>
using namespace std;
#define int long long


int BinaryExponentiation(int x, int n){
    int res=1;
    while (n!=0)
    {
        if ((n&1) !=0)
        {
            res*=x;
        }
       x*=x;
       n=(n>>1); 
    }
    return res;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);
int n;
cin >> n;
if(n%2)
cout << 0 << "\n";
else
cout << BinaryExponentiation(2,n/2) << "\n";
return 0;
}