#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long double number;
    cin >> number;

    if (number == floor(number))
    {
        cout << "int " << floor(number) << endl;
    }
    else
    {
        cout << "float " << floor(number) << " " << (number - floor(number)) << endl;
    }

    return 0;
}
