// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int minOperation(int n, int k, int p)
{
    int m = abs(k) / p;
    int reminder = abs(k) % p;

    if (reminder > 0)
    {
        m += 1;
    }

    return (m <= n) ? m : -1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;

        cout << minOperation(n, k, p) << endl;
    }
}