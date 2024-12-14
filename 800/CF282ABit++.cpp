// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;

    while (n--)
    {
        string i;
        cin >> i;
        if (i == "++X" || i == "X++")
        {
            x++;
        }
        else if (i == "--X" || i == "X--")
        {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}