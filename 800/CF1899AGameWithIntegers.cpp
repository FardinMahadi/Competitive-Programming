#include <iostream> // In the name of Allah, the Most Gracious, the Most Merciful
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        if (n % 3 == 0)
        {
            cout << "Second" << endl;
        }
        else if (n % 3 == 2)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "First" << endl;
        }
    }

    return 0;
}