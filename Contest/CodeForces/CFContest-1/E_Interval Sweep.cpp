#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    if ((a == b || (a + 1) == b || (b + 1) == a) && a > 0 && b > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
