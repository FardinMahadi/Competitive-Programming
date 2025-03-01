// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        int count_dash = 0, count_underscore = 0;

        if (n < 3)
        {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == '-')
            {
                count_dash++;
            }
            else
            {
                count_underscore++;
            }
        }

        long long int result = (1LL * count_dash * (count_dash - 1) / 2) * count_underscore;
        cout << result << endl;
    }

    return 0;
}
