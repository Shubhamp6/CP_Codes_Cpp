#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);
int t;
cin >> t;
while(t--){
long long n;
cin >> n;

long long sum = 0;
while(n > 0){
    sum += n;
    n /= 2;
}
cout << sum << "\n";
}
return 0;
}