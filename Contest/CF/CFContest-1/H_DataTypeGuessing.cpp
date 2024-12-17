#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    long double n, k, a;
    cin >> n >> k >> a;

    long double mul = (n * k) / a;

    if (floor(mul) == mul)
    {
        if (mul >= INT_MIN && mul <= INT_MAX) // Fits in int
        {
            cout << "int" << endl;
        }
        else if (mul >= LLONG_MIN && mul <= LLONG_MAX)
        {
            cout << "long long" << endl;
        }
    }
    else
    {
        cout << "double" << endl;
        return 0;
    }

    return 0;
}