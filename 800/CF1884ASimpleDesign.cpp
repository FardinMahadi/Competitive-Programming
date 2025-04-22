// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

#define test     \
    long long t; \
    cin >> t;    \
    while (t--)

int main()
{
    test
    {
        long long int x, k;
        cin >> x >> k;

        int sum = 0;

        long long int temp = x;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        long long int ans = x;
        if (sum % k == 0)
        {
            cout << x << endl;
            continue;
        }

        while (sum % k != 0)
        {
            ans++;
            long long int temp = ans;
            sum = 0;
            while (temp > 0)
            {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum % k == 0)
            {

                cout << ans << endl;
                break;
            }
        }
    }
    return 0;
}