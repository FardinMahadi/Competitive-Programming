#include <iostream>
#include <string>
using namespace std;

int main()
{
    string numStr;
    cin >> numStr;
    bool isLucky = true;

    for (char ch : numStr)
    {
        if (ch != '4' && ch != '7')
        {
            isLucky = false;
            break;
        }
    }

    if (isLucky)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
