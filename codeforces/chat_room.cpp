#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL),cout.tie(NULL);
string s;
cin >> s;
string check = "hello";
int j = 0;
for (int i = 0 ; i < s.length(); i++)
{
    if (s[i] == check[j])
    {
        j++;
    }
    
}
if (j == 5)
 cout << "YES" << endl;
else
 cout << "NO" << endl;

return 0;
}