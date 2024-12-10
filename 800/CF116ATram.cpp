#include <iostream> // In the name of Allah, the Most Gracious, the Most Merciful
using namespace std;

int main()
{
    int tc, maxP = 0, totalP = 0;
    cin >> tc;

    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        totalP = totalP - a + b;
        if (totalP > maxP)
        {
            maxP = totalP;
        }
    }

    cout << maxP << endl;

    return 0;
}