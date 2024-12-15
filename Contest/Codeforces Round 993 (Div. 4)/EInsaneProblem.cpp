// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long k, l1, r1, l2, r2, count = 0;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        for (long long x = l1; x <= r1; ++x)
        {
            long long n = 0;
            while (true)
            {
                long long y = x * pow(k, n);
                if (y > r2)
                    break;
                if (y >= l2 && y <= r2)
                {
                    ++count;
                }
                n++;
            }
        }
        cout << count << endl;
    }

    return 0;
}