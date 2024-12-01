#include <iostream>
using namespace std;

int main()
{
    int tc, n, a, b;
    cin >> tc;

    if (tc <= 25)
    {
        for (int i = 0; i < tc; i++)
        {
            cin >> n;
            if (n >= 0 && n <= 20)
            {
                a = (n + 1) / 2;
                b = n / 2;
                cout << a << " " << b << endl;
            }
        }
    }

    return 0;
}