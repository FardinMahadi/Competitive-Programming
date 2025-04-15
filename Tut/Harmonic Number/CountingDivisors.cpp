// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, total = 0;
        cin >> n;

        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                total++;
            }
        }
        cout << (total + 1) << '\n';
    }
}