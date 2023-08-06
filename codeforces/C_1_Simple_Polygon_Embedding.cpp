#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);
int t;
cin >> t;
while(t--){
double n;
cin >> n;
const double pi = 3.14159265358979323846;
cout << fixed << setprecision(9) << 1/tan(pi/(2*n)) << "\n";
}
return 0;
}