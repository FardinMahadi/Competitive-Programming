#include <iostream>
using namespace std;

int main()
{
    long double a, b, c;
    long double d;
    cin >> a >> b >> c >> d;

    if ((a + b - c) == d)
    {
        cout << "YES" << endl;
    }
    else if ((a + b * c) == d)
    {
        cout << "YES" << endl;
    }
    else if ((a * b + c) == d)
    {
        cout << "YES" << endl;
    }
    else if ((a * b - c) == d)
    {
        cout << "YES" << endl;
    }
    else if ((a - b + c) == d)
    {
        cout << "YES" << endl;
    }
    else if ((a - b * c) == d)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}