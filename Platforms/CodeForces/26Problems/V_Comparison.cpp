#include <iostream>
using namespace std;

int main()
{
    long double x, y;
    string comp;
    bool isTrue;

    cin >> x >> comp >> y;
    if (comp == ">")
    {
        isTrue = x > y;
    }
    else if (comp == "<")
    {
        isTrue = x < y;
    }
    else if (comp == "=")
    {
        isTrue = (x == y);
    }
    else
    {
        return 1;
    }

    if (isTrue)
    {
        cout << "Right";
    }
    else
    {
        cout << "Wrong";
    }

    return 0;
}