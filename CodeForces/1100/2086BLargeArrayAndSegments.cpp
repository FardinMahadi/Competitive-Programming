// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

#define test     \
    long long t; \
    cin >> t;    \
    while (t--)

int32_t main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test
    {
        int n;
        long long k, x;
        cin >> n >> k >> x;
        vector<int> a(n);

        for (int &ai : a)
            cin >> ai;

        long long sum_a = accumulate(a.begin(), a.end(), 0LL);
        if (sum_a * k < x)
        {
            cout << 0 << '\n';
            continue;
        }

        vector<long long> prefix_a((n * k) + 1, 0);
        for (int i = 0; i < n * k; ++i)
        {
            prefix_a[i + 1] = prefix_a[i] + a[i % n];
        }

        int count = 0;
        int r = 0;
        for (int l = 0; l < n * k; ++l)
        {
            while (r < n * k && prefix_a[r + 1] - prefix_a[l] < x)
            {
                r++;
            }
            if (r < n * k)
                count++;
        }

        cout << count << "\n";
    }

    return 0;
}