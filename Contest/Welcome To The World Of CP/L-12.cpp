#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    bool isNegative = n < 0;
    if (isNegative)
    {
        n = -n;
    }

    string num = to_string(n);
    reverse(num.begin(), num.end());

    size_t firstNonZero = num.find_first_not_of('0');
    if (firstNonZero != string::npos)
    {
        num = num.substr(firstNonZero);
    }
    else
    {
        num = "0";
    }

    if (isNegative)
    {
        cout << "-";
    }
    cout << num << endl;

    return 0;
}
