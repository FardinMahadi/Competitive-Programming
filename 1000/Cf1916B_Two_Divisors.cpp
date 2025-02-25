// In the name of Allah, the Most Gracious, the Most Merciful
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        long long int a, b;
        cin >> a >> b;

        long long int lcm = (a * b) / __gcd(a, b);

        if (lcm == b)
            cout << (lcm * b) / a << endl;
        else
            cout << lcm << endl;
    }
}