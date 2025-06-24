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
        int a, b, c;
        cin >> a >> b >> c;
        bool isPossible = false;

        c -= b - a;
        a += b - a;

        if (a == b && b == c)
        {
            isPossible = true;
        }
        if ((c - b) % 3 == 0 && b < c)
        {
            isPossible = true;
        }

        if (isPossible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}