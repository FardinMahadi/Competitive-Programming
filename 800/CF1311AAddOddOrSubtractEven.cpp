#include <iostream>  // In the name of Allah, the Most Gracious, the Most Merciful
using namespace std; // Incomplete

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int a, b, x, y, movesCount = 0;
        cin >> a >> b;

        if (a == b)
        {
            cout << movesCount << endl;
        }

        if (a < b)
        {
            if (a % 2 != 0)
            {
                x = b - a;
                a += x;
                if (a)
            }
        }
    }

    return 0;
}