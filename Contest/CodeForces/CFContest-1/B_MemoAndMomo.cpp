#include <iostream>
using namespace std;

int main()
{
    long long a, b, k;
    cin >> a >> b >> k;

    if ((a % k) == 0 && (b % k) == 0)
    {
        cout << "Both" << endl;
        return 0;
    }
    else if ((a % k) == 0)
    {
        cout << "Memo" << endl;
        return 0;
    }
    else if ((b % k) == 0)
    {
        cout << "Momo" << endl;
        return 0;
    }
    else
    {
        cout << "No One" << endl;
    }

    return 0;
}