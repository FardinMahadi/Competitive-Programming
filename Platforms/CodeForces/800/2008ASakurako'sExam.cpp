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
        int a, b;
        cin >> a >> b;

        int sum = a + (b * 2);

        if (sum % 2 == 1)
            no;
        else if (a == 0 && b % 2 == 1)
            no;
        else
        {
            yes;
        }
    }

    return 0;
}