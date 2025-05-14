#include <iostream>
using namespace std;

int main()
{
    long double a, b, c, min, max;
    cin >> a >> b >> c;

    // max
    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= a && b >= c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    // min
    if (a <= b && a <= c)
    {
        min = a;
    }
    else if (b <= a && b <= c)
    {
        min = b;
    }
    else
    {
        min = c;
    }

    cout << min << " " << max;

    return 0;
}
