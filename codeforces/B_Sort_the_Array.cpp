#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int start = 1, end = 1, count = 0, flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1] && !flag)
        {
            start = i + 1;
            count++;
            flag = 1;
        }
        if (flag && (a[i] < a[i + 1]))
        {
            flag = 0;
            end = i + 1;
        }
        if(flag && i == n - 2){
            end = i + 2;
        }
    }
    flag = 1;
    for (int i = 0; i < start - 1; i++)
    {
        if(a[i] > a[end-1])
        flag = 0;
    }
    for (int i = end; i < n; i++)
    {
        if(a[start - 1] > a[i])
        flag = 0;
    }
    
    
    if (count > 1 || !flag)
        cout << "no" << endl;
    else
    {
        cout << "yes" << endl;
        cout << start << " " << end << endl;
    }

    return 0;
}