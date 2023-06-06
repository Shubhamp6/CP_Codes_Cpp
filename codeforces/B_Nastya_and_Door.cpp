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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int numberOfPeaks1[n], numberOfPeaks2[n];
        numberOfPeaks1[0] = 0;
        numberOfPeaks2[0] = 0;
        int peaks = 0;
        for (int i = 1; i < n - 1; i++)
        {
            numberOfPeaks1[i] = peaks;
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
                peaks++;
            numberOfPeaks2[i] = peaks;
        }
        numberOfPeaks1[n - 1] = peaks;

        int maxPieces = INT_MIN, index;
        for (int i = 0; i < n - k + 1; i++)
        {
            if (maxPieces < numberOfPeaks1[i + k - 1] - numberOfPeaks2[i])
            {
                maxPieces = numberOfPeaks1[i + k - 1] - numberOfPeaks2[i];
                index = i;
            }
        }
        cout << maxPieces + 1 << " " << index + 1 << endl;
    }
    return 0;
}