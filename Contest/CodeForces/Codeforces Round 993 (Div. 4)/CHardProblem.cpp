#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int m, a, b, c, seated = 0;
        cin >> m >> a >> b >> c;

        int r1 = m, r2 = m;

        if (r1 > a)
        {
            seated += a;
            r1 -= a;
        }
        else
        {
            seated += r1;
            r1 = 0;
        }

        if (r2 > b)
        {
            seated += b;
            r2 -= b;
        }
        else
        {
            seated += r2;
            r2 = 0;
        }

        int seatRemained = r1 + r2;

        if (seatRemained > c)
        {
            seated += c;
        }
        else
        {
            seated += seatRemained;
        }

        cout << seated << endl;
    }

    return 0;
}
