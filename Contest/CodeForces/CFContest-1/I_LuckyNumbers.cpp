#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num >= 10 && num < 100)
    {
        string numStr = to_string(num);
        char firstChar = numStr[0];
        char secondChar = numStr[1];

        int firstDigit = firstChar - '0';
        int secondDigit = secondChar - '0';

        if (secondDigit != 0 && firstDigit % secondDigit == 0)
        {
            cout << "YES" << endl;
        }
        else if (firstDigit != 0 && secondDigit % firstDigit == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}