#include <iostream>
using namespace std;

int main()
{
    long double a, b, c;
    string op, equalSign;
    bool isRight = false;

    cin >> a >> op >> b >> equalSign >> c;

    if (op == "+")
    {
        if ((a + b) == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a + b << endl;
        }
    }
    else if (op == "-")
    {
        if ((a - b) == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a - b << endl;
        }
    }
    else if (op == "*")
    {
        if ((a * b) == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a * b << endl;
        }
    }
    else
    {
        return 1;
    }

    return 0;
}
