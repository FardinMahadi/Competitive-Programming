// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> x(n); // 0 based
    // taking input in 0 based index
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    vector<long long> pref(n + 1); // 1 based
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + x[i - 1];
    }

    // pref[0] = 0
    // pref[1] = x[0]
    // pref[2] = x[0] + x[1]

    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << pref[b] - pref[a - 1] << "\n";
    }
}