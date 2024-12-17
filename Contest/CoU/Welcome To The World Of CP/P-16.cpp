#include <iostream> // In the name of Allah, the Most Gracious, the Most Merciful
#include <string>
using namespace std;

bool isLucky(int number)
{
    string numStr = to_string(number);

    for (char ch : numStr)
    {
        if (ch != '4' && ch != '7')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string n;
    cin >> n;

    int luckyCount = 0;
    for (char ch : n)
    {
        if (ch == '4' || ch == '7')
        {
            luckyCount++;
        }
    }

    if (isLucky(luckyCount))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
