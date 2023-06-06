#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);
double r,x,y,x1,y1;
cin >> r >> x >> y >> x1 >> y1;
double d = sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
cout << ceil(d/(2*r));
return 0;
}