#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);
int n,m,a,b;
cin >> n >> m >> a >> b;
cout << min(min((n/m)*b + (n%m)*a,n*a),((n/m)+1)*b) << endl;
return 0;
}