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
        long double a, b, c;
        cin >> a >> b >> c;

        if ((a + b) / 2 > c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}