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
        int a, b, count = 0;
        cin >> a >> b;

        int reminder = abs(b - a);

        count += (reminder / 10);
        reminder %= 10;

        if (reminder > 0)
        {
            count++;
        }

        cout << count << "\n";
    }

    return 0;
}