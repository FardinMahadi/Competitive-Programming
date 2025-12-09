#include <iostream>
using namespace std;

int main()
{
    int x;
    bool isEven;
    cin >> x;
    string strNum = to_string(x);

    if ((strNum[0] - 0) % 2 == 0)
    {
        isEven = true;
    }
    else
    {
        isEven = false;
    }

    if (isEven)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }

    return 0;
}