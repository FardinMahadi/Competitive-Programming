// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
using namespace std;

int main()
{
    int x, steps = 0;
    cin >> x;

    if (x >= 5)
    {
        steps += (x / 5) + (x % 5 ? 1 : 0);
    }
    else
    {
        steps = 1;
    }

    cout << steps << endl;

    return 0;
}