#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    cout << "floor " << a << " / " << b << " = " << floor(1.0 * a / b) << endl
         << "ceil " << a << " / " << b << " = " << ceil(1.0 * a / b) << endl
         << "round " << a << " / " << b << " = " << round(1.0 * a / b) << endl;

    return 0;
}
