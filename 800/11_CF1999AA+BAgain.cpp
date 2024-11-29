#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tc, num1, sum;
    string num1Str;
    cin >> tc;

    for (int i = 0; i < tc; i++)
    {
        cin >> num1;

        num1Str = to_string(num1);
        sum = (num1Str[0] - '0') + (num1Str[1] - '0');

        cout << sum << endl;
    }

    return 0;
}