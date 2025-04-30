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
        long long int n, b;
        int tg = 0;
        cin >> n >> b;

        if (n <= b)
        {
            cout << 1 << endl;
            continue;
        }

        while (n > 0)
        {
            tg++;
            n /= b;
            if (n < b)
            {
                tg++;
                break;
            }
        }
        cout << tg << endl;
    }

    return 0;
}