#include <bits/stdc++.h>
using namespace std;
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
        vector<int> v, t;
        int maxI = INT_MIN, minI = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
            maxI = max(maxI, a);
            minI = min(minI, a);
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            t.push_back(a);
        }
        float mid, minF = 1/100;
        float maxTime = INT_MIN;
        while (minI < maxI)
        {
            mid = (maxI + minI) / 2;
            int index;
            for (int i = 0; i < n; i++)
            {
                float curTime = abs(mid - v[i]) + t[i];
                if (curTime > maxTime)
                {
                    maxTime = curTime;
                    index = i;
                }
            }
            float maxTime1 = INT_MIN, maxTime2 = INT_MIN;
            for (int i = 0; i < n; i++)
            {
                float curTime = abs(mid + minF - v[i]) + t[i];
                if (curTime > maxTime1)
                {
                    maxTime1 = curTime;
                    index = i;
                }
            }
            for (int i = 0; i < n; i++)
            {
                float curTime = abs(mid - minF - v[i]) + t[i];
                if (curTime > maxTime2)
                {
                    maxTime2 = curTime;
                    index = i;
                }
            }
            if (maxTime1*1000000 < maxTime*1000000)
                maxI = mid;
            else if (maxTime2*1000000 < maxTime*1000000)
                minI = mid;
            else
                break;
        }
        cout << mid << endl;
    }
    return 0;
}