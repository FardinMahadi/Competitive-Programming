// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

#define test     \
    long long t; \
    cin >> t;    \
    while (t--)

long long f(long long int x)
{
    return 2 + ((x * 2) - 1);
}

int main()
{
    test
    {
        int x;
        cin >> x;

        long long int res = ((f(x - 1) * f(x - 2) / f(x - 3)) - f(x - 2)) % 127657753;
        cout << res << endl;
    }

    return 0;
}