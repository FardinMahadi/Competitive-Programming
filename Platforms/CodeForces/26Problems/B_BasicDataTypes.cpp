#include <iostream>

using namespace std;

int main()
{
    int intValue;
    long long longValue;
    char charValue;
    float floatValue;
    double doubleValue;

    cin >> intValue >> longValue >> charValue >> floatValue >> doubleValue;

    cout << intValue << endl
         << longValue << endl
         << charValue << endl
         << floatValue << endl
         << doubleValue;

    return 0;
}