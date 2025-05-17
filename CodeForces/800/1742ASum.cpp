// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

#define test     \
    long long t; \
    cin >> t;    \
    while (t--)

#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

int main()
{

    test
    {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a + b) == c || (b + c) == a || (a + c) == b)
            yes;
        else
            no;
    }

    return 0;
}