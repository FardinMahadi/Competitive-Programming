#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long a, b, c, d;
    long long mul;
    string mulStr;
    cin >> a >> b >> c >> d;
    mul = (a % 100) * (b % 100) * (c % 100) * (d % 100);

    int lastTwoDigits = mul % 100;

    cout << setfill('0') << setw(2) << lastTwoDigits << endl;

    return 0;
}