#include <iostream> // In the name of Allah, the Most Gracious, the Most Merciful
#include <math.h>
using namespace std;

int main()
{
    long int num;
    cin >> num;

    long long int square = pow(5, num);

    string numStr = to_string(square);

    if (numStr.length() > 2)
    {
        string numRes = numStr.substr(numStr.length() - 2, 2);
        cout << numRes << endl;
    }
    else
    {
        cout << numStr << endl;
    }

    return 0;
}