#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    if (n % 4 == 0)
    {
        cout << "YES" << endl;
        for (int i = 0; i < (n + 1) / 2; i++)
        {
            if (i % 2)
            {
                v1.push_back(i + 1);
                v1.push_back(n - i);
            }
            else
            {
                v2.push_back(i + 1);
                v2.push_back(n - i);
            }
        }
    }
    else if ((n - 3) % 4 == 0)
    {
        cout << "YES" << endl;
        v1.push_back(1);
        v1.push_back(2);
        v2.push_back(3);
        for (int i = 0; i < (n - 3) / 2; i++)
        {
            if (i % 2)
            {
                v1.push_back(i + 4);
                v1.push_back(n - i);
            }
            else
            {
                v2.push_back(i + 4);
                v2.push_back(n - i);
            }
        }
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << v1.size() << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl
         << v2.size() << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    return 0;
}