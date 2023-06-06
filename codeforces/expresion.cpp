#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);
int a,b,c;
cin >> a >> b >> c;
int a1 = max(a*b*c,(a+b)*c);
int a2 = max(a1,a*(b+c));
int a3 = max(a2,a+b+c);
cout << a3 << endl;
return 0;
}