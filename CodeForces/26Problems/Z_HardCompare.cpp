#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    double first = b * log(a);
    double second = d * log(c);

    if (first > second)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}