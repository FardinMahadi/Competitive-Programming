#include <iostream>
using namespace std;

int main()
{
    int tc, a, b, c;
    cin >> tc;

    for (int i = 0; i < tc; i++)
    {
        cin >> a >> b >> c;

        if (a + b == c)
        {
            cout << "+" << endl;
        }

        if (a - b == c)
        {
            cout << "-" << endl;
        }
    }

    return 0;
}